#to run this file in bash, type bash script.bash
for i in {1..5}
do
	mv `ls *.cpp | xargs shuf -n1 -e` ./My-solutions-to-Kattis-problems/ #move a random .cpp file in the directory to the folder
	cd My-solutions-to-Kattis-problems/
	git add .
	git status
	git commit -m "Add solution"
	git push origin master
	cd ..
	x=$(((RANDOM% 8000)+1))
	echo $x
	echo runde: $i
	sleep $x
done
	x=$(((RANDOM% 2)))
	if (($x % 2 == 0))
	then
		mv `ls *.cpp | xargs shuf -n1 -e` ./My-solutions-to-Kattis-problems/ 
		cd My-solutions-to-Kattis-problems/
		git add .
		git status
		git commit -m "Add solution"
		git push origin master
		cd ..
	fi
	
