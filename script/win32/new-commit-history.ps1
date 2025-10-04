# ************************************************
# *** SPDX-License-Identifier: AGPL-3-or-later ***
# ************************************************

# *************************************
# *** Author - Eduardo Pozos Huerta ***
# *** File   - clean.sh             ***
# *** Date   - 17/09/2025           ***
# *************************************

# *************
# *** Logic ***
# *************

Remove-Item -Path .git -Recursive -Force

git init
git add .
git commit -m "Firts Commit"
git remote add origin git@github.com:Reymon-Real/enkit.git
git branch -M main
git push --force origin main