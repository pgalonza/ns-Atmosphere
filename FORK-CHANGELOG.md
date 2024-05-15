# Changelog

## 0.1.0

* created a container image (and Dockerfile) for local assembly and integration with CI
* updated build instructions
* added a workflow to create a container image and send it to the GitHub Package
* added a workflow to build a branch and create a release/prerelease;
* automated installation of the latest versions of nx-hbloader and nx-hbmenu
* reverted "fusee: remove ips patch parsing from sd filesystem"
* added embedded ips patch. [rashevskyv](https://github.com/rashevskyv/Kefirosphere)
* removing ACID validation and check. [rashevskyv](https://github.com/rashevskyv/Kefirosphere)
* removed logging to SD. [rashevskyv](https://github.com/rashevskyv/Kefirosphere)
* removed factory reset option. [rashevskyv](https://github.com/rashevskyv/Kefirosphere)
* removed verification signature. [rashevskyv](https://github.com/rashevskyv/Kefirosphere)
* added new types of memory. Stealed from hekate. Can avoid 'Unknown EmcDvfsTimingTableIndex: -1' error. [rashevskyv](https://github.com/rashevskyv/Kefirosphere)
* renamed 'Continue' buttun to 'Install' button. [rashevskyv](https://github.com/rashevskyv/Kefirosphere)
* fixed compile issue with qemu-virt. [BunniKaitlyn](https://github.com/BunniKaitlyn/Atmosphere)