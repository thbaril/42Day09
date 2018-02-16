cat annuaire.txt | grep -i "nicolas    bauer" | awk '{print $(NF-1)}'
