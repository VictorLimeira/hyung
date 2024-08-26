SELECT product.id, product.name
FROM products AS product
INNER JOIN categories AS category ON category.id = product.id_categories
WHERE category.name LIKE 'super%';
