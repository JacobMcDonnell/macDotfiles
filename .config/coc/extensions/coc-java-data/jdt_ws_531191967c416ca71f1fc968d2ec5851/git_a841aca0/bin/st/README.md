# Jacob's Build of the simple terminal by [suckless](https://st.suckless.org)

## Patches

- [gruvbox dark](https://st.suckless.org/patches/gruvbox/)

- [externalpipe](https://st.suckless.org/patches/externalpipe/)

- [one clipboard](https://st.suckless.org/patches/clipboard/)

- [Alpha Focus Highlight](https://st.suckless.org/patches/alpha_focus_highlight/)

- [font2](https://st.suckless.org/patches/font2/)

- [New terminal in current directory](https://st.suckless.org/patches/newterm/)

- [Scrollback](https://st.suckless.org/patches/scrollback/)

- [w3m Images](https://st.suckless.org/patches/w3m/)


## Keybinds

- **RTFM**

## Installation

```shell
git clone https://gitlab.com/Jacob_McDonnell/st.git
cd st
sudo make install
```

Users of Arch-based distros can install from the AUR, [st-jacob-git](https://aur.archlinux.org/packages/st-jacob-git/).

## Dependencies

- `xurls` for using the url features

- `xclip` for copying and pasting

- Any compositor for the alpha (`xcompmgr`, `compton`, etc.)

- `fontconfig` for the default font

- [libxft-bgra](https://aur.archlinux.org/packages/libxft-bgra/)

## Emojis

st like many suckless programs will crash at the first sign of an emoji. The solutions to this is to install [libxft-bgra](https://aur.archlinux.org/packages/libxft-bgra/)
