#!/bin/bash
`xcrun --sdk iphoneos -f clang` -isysroot `xcrun --sdk iphoneos --show-sdk-path` -arch armv7  -framework Foundation -framework IOKit -o ziva jailbreak.m offsets.m heap_spray.m kernel_read.m rwx.m apple_ave_pwn.m iokitUser.m apple_ave_utils.m log.m post_exploit.m utils.m devicesupport.m iosurface_utils.m main.m offsets_yalu.c patchfinder64.o
ldid -S ziva
cp ziva ../saïgon/
# ^ Remove offsets_yalu.c and replace it w/ offsets.m

