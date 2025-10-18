# rootkitty (demo payload)

Minimal EDK II UEFI application that clears the console, prints supplied ASCII art, prints a message, then waits for a keypress.

WARNING: This project is for educational, non-destructive demonstration only. Do not overwrite bootloaders on systems you care about. Test only in virtual machines or disposable test hardware.

Repository layout:
- src/MyPayload.c : UEFI app source
- src/MyPayload.inf : EDK II module INF
- .github/workflows/build.yml : GitHub Actions build to produce .efi artifact

Build locally:
1. Clone edk2 into a sibling folder or use an existing edk2 tree:
   git clone https://github.com/tianocore/edk2.git edk2
2. Copy src/* into edk2/MyPayload
3. Add ../MyPayload/MyPayload.inf into MdeModulePkg/MdeModulePkg.dsc under [Components]
4. From edk2 root:
   . ./edksetup.sh
   make -C BaseTools
   build -p MdeModulePkg/MdeModulePkg.dsc -a X64 -b RELEASE

Or push to GitHub and let Actions build; download the artifact from the Actions run.

License: MIT (see LICENSE)
