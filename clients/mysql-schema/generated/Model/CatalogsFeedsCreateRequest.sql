--
-- Pinterest REST API.
-- Prepared SQL queries for 'CatalogsFeedsCreateRequest' definition.
--


--
-- SELECT template for table `CatalogsFeedsCreateRequest`
--
SELECT `default_country`, `default_availability`, `default_currency`, `name`, `format`, `default_locale`, `credentials`, `location`, `preferred_processing_schedule` FROM `CatalogsFeedsCreateRequest` WHERE 1;

--
-- INSERT template for table `CatalogsFeedsCreateRequest`
--
INSERT INTO `CatalogsFeedsCreateRequest`(`default_country`, `default_availability`, `default_currency`, `name`, `format`, `default_locale`, `credentials`, `location`, `preferred_processing_schedule`) VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?);

--
-- UPDATE template for table `CatalogsFeedsCreateRequest`
--
UPDATE `CatalogsFeedsCreateRequest` SET `default_country` = ?, `default_availability` = ?, `default_currency` = ?, `name` = ?, `format` = ?, `default_locale` = ?, `credentials` = ?, `location` = ?, `preferred_processing_schedule` = ? WHERE 1;

--
-- DELETE template for table `CatalogsFeedsCreateRequest`
--
DELETE FROM `CatalogsFeedsCreateRequest` WHERE 0;

