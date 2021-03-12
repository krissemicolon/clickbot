project(
    'clickbot',
    'c',
    version : '1.0.0',
    license : 'GPLv3',
    default_options : [
      'c_std=c99',
      'buildtype=release',
      'default_library=shared',
      'optimization=3',
      'b_lto=false',
    ]
)

cflags = '-march=native'
macros = '-DVERSION="1.0.0"'

executable( 
    'clickbot',
    'src/main.c',
    'src/cli.c',
    c_args: [cflags, macros]
)

