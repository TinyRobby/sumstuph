#change
if [[ "$1" = "password" ]]
then
	sudo passwd $USER
fi
if [[ "$1" = "im" ]]
then
    if [[ "$2" = "henry" ]]
    then
        python main.py
    fi
fi