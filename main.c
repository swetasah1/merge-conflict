pseudo code
{
Initial Function()
{
  git checkout master
git pull
make world
make check-world
}

feature2()
{
  git format-patch -v1 master --base master
  git checkout reindex-concurrently
git merge master
# possibly conflict resolution
make world
make check-world
}



}
