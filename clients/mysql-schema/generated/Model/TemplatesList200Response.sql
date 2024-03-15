--
-- Pinterest REST API.
-- Prepared SQL queries for 'templates_list_200_response' definition.
--


--
-- SELECT template for table `templates_list_200_response`
--
SELECT `items`, `bookmark` FROM `templates_list_200_response` WHERE 1;

--
-- INSERT template for table `templates_list_200_response`
--
INSERT INTO `templates_list_200_response`(`items`, `bookmark`) VALUES (?, ?);

--
-- UPDATE template for table `templates_list_200_response`
--
UPDATE `templates_list_200_response` SET `items` = ?, `bookmark` = ? WHERE 1;

--
-- DELETE template for table `templates_list_200_response`
--
DELETE FROM `templates_list_200_response` WHERE 0;

