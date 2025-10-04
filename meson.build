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

enkit_directories = include_directories(
	'include',
	
	'include/enkit',
	'include/raylib',
	'include/gnucobol'
)

# ********************
# *** Dependencies ***
# ********************s

libraylib = declare_dependency(
	link_args: [
		'-L../../lib/raylib/' + system + '/lib',
		'-lraylib'
	],

	include_directories: enkit_directories
)

libcob = declare_dependency(
	link_args: [
		'-L../../lib/gnucobol/' + system + '/lib',
		'-lcob'
	],
)

libunix = declare_dependency(
	link_args: [
		'-L../../lib/' + system,

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

rpath = 'lib/linux:lib/raylib/linux/lib:lib/gnucobol/linux/lib'

# ********************
# *** Subdirectory ***
# ********************

subdir('src')

# *************************
# *** Linux Executables ***
# *************************

if system == 'linux'

enkit = executable(
	'enkit',
	enkit_files,

	build_rpath: rpath,

	include_directories: enkit_directories,

	link_with: [
		libenkit_in,
		libenkit_out,
		libenkit_errno,
		libenkit_cobol,
		libenkit_reymon
	],

	dependencies: [
		libunix,
		libcob,
		libraylib
	],

	install: true
)

# ***************************
# *** Windows Executables ***
# ***************************

elif system == 'windows'

enkit = executable(
	'enkit',
	enkit_files,

	include_directories: enkit_directories,

	link_with: [
		libenkit_in,
		libenkit_out,
		libenkit_errno,
		libenkit_reymon
	],

	dependencies: [
		libwin32,
		libraylib
	],

	install: true
)

endif

#install_data(enkit)