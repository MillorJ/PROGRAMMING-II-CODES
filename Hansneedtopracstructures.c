#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

typedef enum {
    FALSE, TRUE
} Boolean;

typedef struct {
    char name[SIZE];
    char brand[SIZE];
    int id;
} ProductInfo;

typedef struct {
    ProductInfo info;
    int qty;
    int price;
} Product;

typedef struct {	
    Product productList[SIZE];
    int counter;
} ProductRecord;


/**
 * Given a product as a parameter, this function will print 
 * the information of a product.
*/
void printProduct(Product product)
{
	printf("Product name: %s\n", product.info.name);
	printf("Product brand: %s\n", product.info.brand);
	printf("Product ID: %d\n", product.info.id);
	printf("Product qty: %d\n", product.qty);
	printf("Product price: %d\n, product.price);
}


/**
 * Given the record of the products as parameter, this function will print all
 * the products found in the record by calling/invoking the printProduct() function.
*/
void printProductList(ProductRecord productRecord)
{
	int i;
	for (i = 0; i < productRecord.counter; i++)
	{
		printf("Product #%d:\n", i+1);
		printProduct(productRecord.productList[i]);
		printf("\n");	
	}
}

/**
 * Given the product record and a product as parameters, this function
 * will add the new product to the product record at the end of the record.
*/
void addProduct(ProductRecord *productRecord, Product product)
{
		productRecord->productList[productRecord->counter++] = product;
}

/**
 * Given an id of the product, this function will look for that product and 
 * delete it in the record if it exists, otherwise, it will print a message
 * that says "Product <id> does not exist."
*/
void deleteProduct(ProductRecord *productRecord, int productId)
{

}

/**
 * Given the product record and the id of a product as parameters, this function
 * will return TRUE if the product can be found in the records, otherwise, it will
 * return FALSE.
 */
Boolean isMember(ProductRecord productRecord, int productId)
{
  Boolean found = FALSE;
  int i;
  for (i = 0; i < productRecord.counter; i++)
  {
  	if (productRecord.productList[i].info.id == productID)
  	{
  		found = TRUE;
	  }
  }
  return found;
  
  }
  

/**
 * Given the product record, the id of a product, and a new product info as parameters,
 * this function will look for the specific product and update its information, if it exists.
 * Otherwise, it will print a message that says "Product <id> does not exist."
 */
void updateProduct(ProductRecord *productRecord, int productId, ProductInfo info)
{

}

/**
 * Given the product record and a list of the products, this function will populate
 * the product record.
 */
void populateProductRecord(ProductRecord *productRecord, Product productList[])
{
	int i;
	for (i = 0; i <= productRecord->counter; i++)
	{
		productRecord->productList[i] = productList[i];
	}

}
	

int main()
{
    // Initialize the following variables
    ProductRecord productRecord = {.counter = 5};
    Product productList[5] = {
    	{{"John","Bearbrand",1123},114,250},
    	{{"Thea","Coke",1142},115, 260},
    	{{"Hans","Icetea",1134},116, 270},
    	{{"Maria","Royal",1145},117, 280},
    	{{"Vince","Quaker",1165},118, 290},
    };
	

    // Populate the Product Record.
    populateProductRecord(&productRecord,productList[]);

 	// Add a New Product
//  Product product1, product2;
 	addProduct(&productRecord, productList
	
 // Display the Product Record.
 //rintProductList(____);
    // Delete a Product;
 // int productId;	
 // deleteProduct(___, ____);


    // Check the deleted product if it exists or not.
  //Boolean isExists = isMember(___, ___);
  //printf("The product %d is %d\n", productId, isExists);


    // Update a specific product
  //updateProduct(___, ____, ____);


    return 0;
}

