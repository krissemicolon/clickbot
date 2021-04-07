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

cflags = '-Wall'
macros = '-DVERSION="1.0.0"'
compiler = meson.get_compiler('c')

xdo = compiler.find_library('xdo', dirs: ['/usr/lib64'])

executable( 
    meson.project_name(),
    'src/main.c',
    'src/cli.c',
    'src/click.c',
    'src/sleep.c',
    c_args: [cflags, macros],
    dependencies: xdo
)