# Jacob's Build of the dwm by [suckless](https://dwm.suckless.org)

## Patches

- [actual fullscreen](https://dwm.suckless.org/patches/actualfullscreen/)

- [three columns](http://dwm.suckless.org/patches/three-column/)

- [fibonacci layout](https://dwm.suckless.org/patches/fibonacci/)

- [gridmode layout](https://dwm.suckless.org/patches/gridmode/)

- My keybinds in the patches folder

- Pywal integration(Modifies xrdb to work with pywal)

- [stacker](https://dwm.suckless.org/patches/stacker/)

- [swallow](https://dwm.suckless.org/patches/swallow/)

- [xrdb](https://dwm.suckless.org/patches/xrdb/)

## Keybinds

- **RTFM**

## Installation

```shell
git clone https://gitlab.com/Jacob_McDonnell/dwm.git
cd dwm
sudo make install
```

Users of Arch-based distros can install from the AUR, [dwm-jacob-git](https://aur.archlinux.org/packages/dwm-jacob-git/).

## Dependencies

- `dwmblocks` or some other status bar program

- `dmenu`

- `fontconfig` for the default font

- `pywal` for a dynamic color scheme

- [libxft-bgra](https://aur.archlinux.org/packages/libxft-bgra/)

- `ttf-joypixels`

## Colors and Fonts

- Compatible with `Xresources` and `pywal` for a dynamic color scheme

- Default font is the default mono font of your system at size 14pt and uses `ttf-joypixels`  for emojis

## Emojis

DWM like many suckless programs will crash at the first sign of an emoji. Suckless has a work around but **THIS VERSION WILL CRASH WITHOUT LIBXFT-BGRA** The solutions to this is to install [libxft-bgra](https://aur.archlinux.org/packages/libxft-bgra/)
