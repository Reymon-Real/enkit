# **********************
# *** System Support ***
# **********************

if system == 'linux'

# *************
# *** Files ***
# *************

enkit_cobol_sources = files(
	'ReyCreateRFS.cbl'
)

# *******************
# *** Directories ***
# *******************

enkit_cobol_directories = [
	'-I', '../../include/cobol'
]

# *************
# *** Tools ***
# *************

cobc = find_program('cobc')

# *******************
# *** Tools Flags ***
# *******************

cobcflags = [
	enkit_cobol_directories,
	'-free',
	'-ext', 'cpy',
	'-std=ibm'
]

# ****************
# *** Generate ***
# ****************

cobol = generator(
	cobc,
	output: '@PLAINNAME@.o',
	arguments: [
		cobcflags,
		'-c',
		'-o',
		'@OUTPUT@',
		'@INPUT@'
	]
)

# ********************
# *** Object Files ***
# ********************

enkit_cobol_objects = cobol.process(enkit_cobol_sources)

# ***************
# *** Library ***
# ***************

libenkit_cobol = static_library(
	'enkit_cobol',
	enkit_cobol_objects,
	include_directories: enkit_directories
)

endif