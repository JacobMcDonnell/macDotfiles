" Basic setup stuff
let mapleader=" "
set number relativenumber
filetype plugin on
syntax on
set wildmode=longest,list,full

" Spell check
map <leader>o :setlocal spell! spelllang=en_us<CR>

map <leader>t :vsplit term://zsh<CR>

" Removes spaces at the end of lines when saving
autocmd BufWritePre * %s/\s\+$//e

" Center Cursor when entering insert mode
autocmd InsertEnter * norm zz

" Fixing indenting visual block
vmap < <gv
vmap > >gv

" Makes splitting default to the right and to the bottom
set splitbelow splitright

" Remaps moving keys for splitting
map <C-h> <C-w>h
map <C-j> <C-w>j
map <C-k> <C-w>k
map <C-l> <C-w>l

" Plugins
call plug#begin('~/.local/share/nvim/plugged')
Plug 'junegunn/goyo.vim' " Nice for reading Documents
Plug 'neoclide/coc.nvim', {'branch': 'release'} " Code Completion
Plug 'tpope/vim-commentary' " Makes commenting multiple lines easier
Plug 'vimwiki/vimwiki'
Plug 'NLKNguyen/papercolor-theme'
call plug#end()

" Goyo plugin makes text more readable when writing prose:
map <leader>f :Goyo \| set bg=dark \| set linebreak<CR>

" Commentary plugin
map <leader>c :Commentary \| set linebreak<CR>

" use <tab> for trigger completion and navigate to the next complete item
function! s:check_back_space() abort
  let col = col('.') - 1
  return !col || getline('.')[col - 1]  =~ '\s'
endfunction

inoremap <silent><expr> <Tab>
      \ pumvisible() ? "\<C-n>" :
      \ <SID>check_back_space() ? "\<Tab>" :
      \ coc#refresh()
let g:coc_global_extensions = [
	\ 'coc-html',
	\ 'coc-java',
	\ 'coc-tsserver',
	\ 'coc-css',
	\ 'coc-clangd',
	\ 'coc-go',
	\ 'coc-pairs'
	\ ]

" runs gofmt when closing a go file.
autocmd VimLeave *.go !gofmt -w %

"Colorscheme Gruvbox
set t_Co=256

" ChangeBackground changes the background mode based on macOS's `Appearance`
" setting. We also refresh the statusline colors to reflect the new mode.
function! ChangeBackground()
  if system("defaults read -g AppleInterfaceStyle") =~ '^Dark'
    set background=dark   " for the dark version of the theme
  else
    set background=light  " for the light version of the theme
  endif
endfunction

" initialize the colorscheme for the first run
call ChangeBackground()

map <leader>c :call ChangeBackground()<CR>

colorscheme PaperColor
