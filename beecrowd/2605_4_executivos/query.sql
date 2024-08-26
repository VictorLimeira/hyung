SELECT product.name,
	provider.name
FROM products AS product
INNER JOIN providers AS provider ON provider.id = product.id_providers
INNER JOIN categories AS category ON category.id = product.id_categories
WHERE category.id = 6;
