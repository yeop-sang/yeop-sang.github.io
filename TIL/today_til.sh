now=`LC_ALL=C date "+%B %d, %Y"`
year=`LC_ALL=C date "+%Y"`
month=`LC_ALL=C date "+%B"`

f_name=TIL/${year}/${month}/${now}.md

code "$f_name"
