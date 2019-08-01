find . -name "*.sh" -exec basename {} + | sed 's/...$//' | cat -e
