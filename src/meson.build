# *************
# *** Tools ***
# *************

cobc = find_program('cobc')

# ********************
# *** Source files ***
# ********************

enkit_sources = files(
	'main/enkit.c',
	'main/runtime.c',
	
	'reymon/rfs.c',
	'reymon/menu.c',
	'reymon/screen.c',
	
	'file_io/file_input.c',
	'file_io/file_output.c'
)

# ********************
# *** Header files ***
# ********************

enkit_headers = [
	'include/enkit/in.h',
	'include/enkit/out.h',
	'include/enkit/init.h',
	'include/enkit/enkit.h',
	'include/enkit/types.h',
	'include/enkit/utils.h',
	'include/enkit/render.h',
	'include/enkit/reysub.h',
	'include/enkit/destroy.h',
	'include/enkit/runtime.h',
]

# *******************
# *** COBOL Files *** 
# *******************

main_cob = files(
	'cobol/rfs.cbl'
)

# **********************
# *** Custom targets ***
# **********************

if system == 'linux'

cobol = generator(
	cobc,
	output: '@BASENAME@.o',
	arguments: [
		'-free',
		'-std=ibm',
		'-c',
		'-o',
		'@OUTPUT@',
		'@INPUT@'
	]
)

rfs_cob = cobol.process(main_cob)

endif

# *****************
# *** All files ***
# *****************

if system == 'linux'

enkit_files = enkit_sources + enkit_headers + rfs_cob

elif system == 'windows' or system == 'darwin'

enkit_files = enkit_sources + enkit_headers

else

error('Error C1')

endif