src = fraction.cpp fraction_test.cpp
project = customer
customer: $(src)
	g++ $^ -lgtest -lgtest_main -lpthread -o $@
run: customer
	./$^
clean:
	rm *.out
  
  


