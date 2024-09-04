find . -name "*.sh" | sed 's/^\.\///; s/\.sh$//' |sed 's|.*/||'
