#/bin/sh

# OK (1 resultat)
ARGS1='"9...7...." "2...9..53" ".6..124.." "84...1.9." "5.....8.." ".31..4..." "..37..68." ".9..5.741" "47......."'
# Error (2 resultats)
ARGS2='"9.6.7.4.3" "...4..2.." ".7..23.1." "5.....1.." ".4.2.8.6." "..3.....5" ".3.7...5." "..7..5..." "4.5.1.7.8"'
# OK (hard)
ARGS3='"........." ".....3.85" "..1.2...." "...5.7..." "..4...1.." ".9......." "5......73" "..2.1...." "....4...9"'
# Error (2 same numbers on the same row)
ARGS4='"9...4...." "2...9..53" ".6..124.." "84...1.9." "5.....8.." ".31..4..." "..37..68." ".9..5.741" "47......."'
# Error (bad args count)
ARGS5='"9...4...." "2...9..53" ".6..124.." "84...1.9." "5.....8.." ".31..4..." "..37..68." ".9..5.741" "47......." "47......."'
# Error (bad args count)
ARGS6='"9...4...." "2...9..53" ".6..124.." "84...1.9." "5.....8.." ".31..4..." "..37..68." ".9..5.741"'
# Error (bad char in arg)
ARGS7='"9...4...." "2...9..53" ".6..124.." "84...1.9." "5.....8.." ".31..4..." "..37..68." ".9..5?741"'
# Error (bad size of string in in arg)
ARGS8='"9...4...." "2...9..53" ".6..124.." "84...1.9." "5.....8.." ".31..4..." "..37..68." ".9..5..741"'
# Error (empty grid)
ARGS9='"........." "........." "........." "........." "........." "........." "........." "........." "........."'

echo '>>> Expected: OK (1 result)'
./colle-1 $(echo $ARGS1 | xargs) | cat -e

echo '>>> Expected: Error (2 results)'
./colle-1 $(echo $ARGS2 | xargs) | cat -e

echo '>>> Expected: Error (2 same numbers on the same row)'
./colle-1 $(echo $ARGS4 | xargs) | cat -e

echo '>>> Expected: Error (bad args count)'
./colle-1 $(echo $ARGS5 | xargs) | cat -e

echo '>>> Expected: Error (bad args count)'
./colle-1 $(echo $ARGS6 | xargs) | cat -e

echo '>>> Expected: Error (bad char in arg)'
./colle-1 $(echo $ARGS7 | xargs) | cat -e

echo '>>> Expected: Error (bad size of string in in arg)'
./colle-1 $(echo $ARGS8 | xargs) | cat -e

echo '>>> Expected: Error (no arg)'
./colle-1 | cat -e

echo '>>> Expected: Error (empty grid)'
./colle-1 $(echo $ARGS9 | xargs) | cat -e

echo '>>> Expected: OK (hard)'
./colle-1 $(echo $ARGS3 | xargs) | cat -e
