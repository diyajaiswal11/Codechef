/*Chef is interested in the history of SnackDown contests. He needs a program to verify if SnackDown was hosted in a given year.

SnackDown was hosted by CodeChef in the following years: 2010, 2015, 2016, 2017 and 2019.*/

import java.util.*; 
fun main(args: Array<String>){
val sc=Scanner(System.`in`)
var t=sc.nextInt()
while(t > 0){
val x=sc.nextInt()
when(x){
2010,2015,2016,2017,2019 -> println("HOSTED") 
else -> println("NOT HOSTED")
}
t--
}
}