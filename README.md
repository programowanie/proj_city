# Bukowski Rafał 

Symulacją którą chcę stworzyć będzie wzorowała się na tej z gry SimCity. W przeciwieństwie jednak do niej, która jest w czasu rzeczywistego, ta symulacja będzie na swój sposób turowa. Miasto zaczyna z ludnością i budżetem, posiada też modyfikatory które mogą zmieniać te atrybuty (przyrost naturalny, przychód). Co turę mogą się pojawiać losowe wydarzenia które będą wpływać na miasto. Przykładowymi wydarzeniami mogą być tornado (zmniejsza populację i budżet), organizacja festiwalu czy koncertu (zwiększony przychód, jeśli Woodstock to plus do przyrostu naturalnego ;) ), budowa elektrowni atomowej (większy przychód i jednorazowy wydatek) a nawet i jej wybuch (znaczne zmniejszenie atrybutów i modyfikatorów, wymaganiem jest wcześniejsza budowa elektrowni) (//jeszcze nie zrobione//g). Wydarzenia te nie muszą się pojawiać dokładnie co turę, równie dobrze może nic się w danej nie wydarzyć. Symulacja kończy się gdy miasto wyginie, osiągnie określoną populację lub minie jakiś okres czasu.

events.csv
Wydarzenia które występują w tej symulacji są możliwe do modyfikacji przez użytkownika. Wydarzenia zapisane są liniowo.

Przykładowa struktura wydarzenia:
treść wydarzenia|zmiana populacji (int)|zmiana budżetu (int)|zmiana przyrostu nat (double)| zmiana przychodu (double)|

Dwa ostatnie parametry sa mnożone do wartości bazowych miasta w danej turze.

Niektóre wydarzenia mogą być zbyt niszczycielskie co może szybko kończyć symulację.