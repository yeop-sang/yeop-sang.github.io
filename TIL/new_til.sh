# get time
now=`LC_ALL=C date "+%B %d, %Y"`
year=`LC_ALL=C date "+%Y"`
month=`LC_ALL=C date "+%B"`
dir_name=TIL/${year}/${month}
f_name=TIL/${year}/${month}/${now}.md
echo $f_name

mkdir -p $dir_name

cat <<EOF > $f_name
# $f_name


EOF

code "$f_name"
git add "$f_name"
