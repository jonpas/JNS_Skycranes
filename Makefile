MAJOR = $(shell grep "^\#define[[:space:]]*MAJOR" addons/core/script_version.hpp | egrep -m 1 -o '[[:digit:]]+')
MINOR = $(shell grep "^\#define[[:space:]]*MINOR" addons/core/script_version.hpp | egrep -m 1 -o '[[:digit:]]+')
PATCH = $(shell grep "^\#define[[:space:]]*PATCHLVL" addons/core/script_version.hpp | egrep -m 1 -o '[[:digit:]]+')
VERSION = $(MAJOR).$(MINOR).$(PATCH)
PREFIX = jns_skycranes
BIN = @jns_skycranes
ZIP = JNS_Skycranes

release/$(BIN)/addons/$(PREFIX)_%.pbo: addons/%
	@mkdir -p release/$(BIN)/addons
	@echo "  PBO  $@"
	@armake build ${FLAGS} -f $< $@

release/$(BIN)/optionals/$(PREFIX)_%.pbo: optionals/%
	@mkdir -p release/$(BIN)/optionals
	@echo "  PBO  $@"
	@armake build ${FLAGS} -f $< $@

# Shortcut for building single addons (eg. "make <component>.pbo")
%.pbo:
	"$(MAKE)" $(MAKEFLAGS) $(patsubst %, release/$(BIN)/addons/$(PREFIX)_%, $@)

all: $(patsubst addons/%, release/$(BIN)/addons/$(PREFIX)_%.pbo, $(wildcard addons/*)) \
		$(patsubst optionals/%, release/$(BIN)/optionals/$(PREFIX)_%.pbo, $(wildcard optionals/*))

filepatching:
	"$(MAKE)" $(MAKEFLAGS) FLAGS="-w unquoted-string -p"

release/$(BIN)/keys/%.biprivatekey:
	@mkdir -p release/$(BIN)/keys
	@echo "  KEY  $@"
	@armake keygen -f $(patsubst release/$(BIN)/keys/%.biprivatekey, release/$(BIN)/keys/%, $@)

release/$(BIN)/addons/$(PREFIX)_%.pbo.$(PREFIX)_$(VERSION).bisign: release/$(BIN)/addons/$(PREFIX)_%.pbo release/$(BIN)/keys/$(PREFIX)_$(VERSION).biprivatekey
	@echo "  SIG  $@"
	@armake sign -f release/$(BIN)/keys/$(PREFIX)_$(VERSION).biprivatekey $<

release/$(BIN)/optionals/$(PREFIX)_%.pbo.$(PREFIX)_$(VERSION).bisign: release/$(BIN)/optionals/$(PREFIX)_%.pbo release/$(BIN)/keys/$(PREFIX)_$(VERSION).biprivatekey
	@echo "  SIG  $@"
	@armake sign -f release/$(BIN)/keys/$(PREFIX)_$(VERSION).biprivatekey $<

signatures: $(patsubst addons/%, release/$(BIN)/addons/$(PREFIX)_%.pbo.$(PREFIX)_$(VERSION).bisign, $(wildcard addons/*)) \
		$(patsubst optionals/%, release/$(BIN)/optionals/$(PREFIX)_%.pbo.$(PREFIX)_$(VERSION).bisign, $(wildcard optionals/*))

clean:
	rm -rf release

release:
	@"$(MAKE)" clean
	@"$(MAKE)" $(MAKEFLAGS) signatures
	@echo "  ZIP  $(ZIP)_$(VERSION).zip"
	@cp LICENSE.md README.md AUTHORS.txt jns_skycranes_logo.paa mod.cpp meta.cpp release/$(BIN)
	@zip -r release/$(ZIP)_$(VERSION).zip release/$(BIN) &> /dev/null

.PHONY: release
