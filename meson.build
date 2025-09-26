# **************************
# *** Set Config project ***
# **************************

project(
	'Έnosis Kit',
	'c',
	version: '1.0.0',
	meson_version: '>=1.8.0',
	
	license: 'AGPL-3.0-or-later',
	license_files: [
		'licenses/enkit_copyright.txt',
		'licenses/raylib_copyright.txt',
		'licenses/gnucobol_copyright.txt'
	]
)

# ********************************
# *** Most important variables ***
# ********************************

system = host_machine.system()

# ******************************
# *** Project configurations *** 
# ******************************

add_project_arguments(
	
	'-DENKIT_VERSION="' + meson.project_version() + '"',
	'-D' + system + '=1',

	language: 'c'
)

# *******************
# *** Directories ***
# *******************

header_directories = [
	'include',
	
	'include/enkit',
	'include/raylib'
]

# ********************
# *** Dependencies ***
# ********************s

libraylib = declare_dependency(
	link_args: [
		'-L../../lib/raylib/' + system + '/lib',
		'-lraylib'
	],

	include_directories: include_directories(header_directories)
)

libreysub = declare_dependency(
	link_args: [
		'-L.',
		'-lreysub'
	],

	include_directories: include_directories(header_directories)
)

libcob = declare_dependency(
	link_args: [
		'-L../../bin/' + system + '/lib',
		'-lcob'
	]
)

libunix = declare_dependency(
	link_args: [
		'-lc',
		'-lgmp',
		'-lxml2',
		'-lcjson',
		'-lncursesw',
		'-ltinfo',
		'-ldb-5.3',
		'-lm',
		'-lpthread',
		'-ldl',
		'-licuuc',
		'-lz',
		'-llzma',
		'-licudata',
		'-lstdc++',
		'-lgcc_s'
	]
)

libwin32 = declare_dependency(
	link_args: [
		'-lkernel32',
		'-lgdi32',
		'-lwinmm'
	]
)

# ********************
# *** Build rpaths ***
# ********************

raylib_rpath = 'lib/raylib/' + system + '/lib'

# ********************
# *** Subdirectory ***
# ********************

subdir('src')

# *************************
# *** Linux Executables ***
# *************************

if system == 'linux'

executable(
	'enkit',
	enkit_files,

	build_rpath: raylib_rpath,

	include_directories: [
		header_directories
	],

	dependencies: [
		libunix,
		libcob,
		libraylib
	]
)

# ***************************
# *** Windows Executables ***
# ***************************

elif system == 'windows'

executable(
	'enkit',
	enkit_files,

#	build_rpath: raylib_rpath,

	include_directories: [
		header_directories
	],

	dependencies: [
		libwin32,
		libraylib
	]
)

endif