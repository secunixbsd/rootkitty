#include <Uefi.h>
#include <Library/UefiLib.h>
#include <Library/UefiBootServicesTableLib.h>

EFI_STATUS EFIAPI UefiMain(IN EFI_HANDLE ImageHandle, IN EFI_SYSTEM_TABLE *SystemTable) {
    // Clear screen
    SystemTable->ConOut->ClearScreen(SystemTable->ConOut);

    // ASCII art (exact characters provided)
    Print(L"▀▀▀▀▀▀▀ ▀▀▀▀▀▀▀▀▀▘  ▀▀▀▀▀▀    ▀▀▀▀▀▀\n");
    Print(L"▀▀▀▀▀▀▀ ▀▀▀▀▀▀▀▀▀▀▀ ▀▀▀▀▀▀▘  ▝▀▀▀▀▀▀\n");
    Print(L"  ▀▀▀     ▀▀▀   ▀▀▀   ▀▀▀▀▀  ▀▀▀▀▀\n");
    Print(L"  ▀▀▀     ▀▀▀▀▀▀▀▀    ▀▀▀▝▀▘▝▀▘▀▀▀\n");
    Print(L"  ▀▀▀     ▀▀▀▀▀▀▀▀    ▀▀▀ ▀▀▀▀ ▀▀▀\n");
    Print(L"  ▀▀▀     ▀▀▀   ▀▀▀   ▀▀▀ ▝▀▀▘ ▀▀▀\n");
    Print(L"▀▀▀▀▀▀▀ ▀▀▀▀▀▀▀▀▀▀▀ ▀▀▀▀▀  ▀▀  ▀▀▀▀▀\n");
    Print(L"▀▀▀▀▀▀▀ ▀▀▀▀▀▀▀▀▀▘  ▀▀▀▀▀  ▝▘  ▀▀▀▀▀\n");
    Print(L"              ▄▄▄ ▄   ▄     ▄   ▄▄▖      ▄\n");
    Print(L"               █  █▄▖ ▄ ▄▄▖ █ ▄ █ █ ▄▖ ▗▄█\n");
    Print(L"               █  █ █ █ █ █ █▟▘ █▀▘▗▄█ █ █\n");
    Print(L"               █  █ █ █ █ █ █▝▙ █  ▜▄█ ▜▄█\n\n");

    // Compromise message
    Print(L"YOUR SYSTEM HAS BEEN COMPROMISED BY THE BOOTKITTY FIRMWARE.\n\n");
    Print(L"Press any key to continue...\n");

    // Wait for keypress
    SystemTable->ConIn->Reset(SystemTable->ConIn, FALSE);
    EFI_INPUT_KEY Key;
    while (SystemTable->ConIn->ReadKeyStroke(SystemTable->ConIn, &Key) == EFI_NOT_READY) {
        // busy-wait; simple portable demo loop
    }

    return EFI_SUCCESS;
}
