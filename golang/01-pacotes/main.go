package main

import (
	"fmt"
	"modulo/auxiliar"
)

func main() {
	const name, age = "Angela", 23
	
	fmt.Println(name, "is", age, "years old")
	fmt.Println("Estou no main")
	auxiliar.Write()
}

