package org.openapitools.server.api.verticle;

import org.openapitools.server.api.model.CatalogsFeed;
import org.openapitools.server.api.model.CatalogsItemValidationIssue;
import org.openapitools.server.api.model.CatalogsItems;
import org.openapitools.server.api.model.CatalogsItemsBatch;
import org.openapitools.server.api.model.CatalogsItemsFilters;
import org.openapitools.server.api.model.CatalogsList200Response;
import org.openapitools.server.api.model.CatalogsListProductsByFilterRequest;
import org.openapitools.server.api.model.CatalogsProductGroupPinsList200Response;
import org.openapitools.server.api.model.CatalogsProductGroupProductCounts;
import org.openapitools.server.api.model.CatalogsProductGroupsCreate201Response;
import org.openapitools.server.api.model.CatalogsProductGroupsCreateRequest;
import org.openapitools.server.api.model.CatalogsProductGroupsList200Response;
import org.openapitools.server.api.model.CatalogsProductGroupsUpdateRequest;
import org.openapitools.server.api.model.Error;
import org.openapitools.server.api.model.FeedProcessingResultsList200Response;
import org.openapitools.server.api.model.FeedsCreateRequest;
import org.openapitools.server.api.model.FeedsList200Response;
import org.openapitools.server.api.model.FeedsUpdateRequest;
import org.openapitools.server.api.model.ItemsBatchPostRequest;
import org.openapitools.server.api.model.ItemsIssuesList200Response;
import org.openapitools.server.api.MainApiException;

public final class CatalogsApiException extends MainApiException {
    public CatalogsApiException(int statusCode, String statusMessage) {
        super(statusCode, statusMessage);
    }

    public static final CatalogsApiException Catalogs_catalogsList_200_Exception = new CatalogsApiException(200, "Success");
    public static final CatalogsApiException Catalogs_catalogsList_400_Exception = new CatalogsApiException(400, "Invalid parameters.");
    public static final CatalogsApiException Catalogs_catalogsList_401_Exception = new CatalogsApiException(401, "Unauthorized access.");
    public static final CatalogsApiException Catalogs_catalogsProductGroupPinsList_200_Exception = new CatalogsApiException(200, "Success");
    public static final CatalogsApiException Catalogs_catalogsProductGroupPinsList_400_Exception = new CatalogsApiException(400, "Invalid parameters.");
    public static final CatalogsApiException Catalogs_catalogsProductGroupPinsList_401_Exception = new CatalogsApiException(401, "Unauthorized access.");
    public static final CatalogsApiException Catalogs_catalogsProductGroupPinsList_404_Exception = new CatalogsApiException(404, "Catalogs product group not found.");
    public static final CatalogsApiException Catalogs_catalogsProductGroupsCreate_201_Exception = new CatalogsApiException(201, "Success");
    public static final CatalogsApiException Catalogs_catalogsProductGroupsCreate_400_Exception = new CatalogsApiException(400, "Invalid body.");
    public static final CatalogsApiException Catalogs_catalogsProductGroupsCreate_401_Exception = new CatalogsApiException(401, "Unauthorized access.");
    public static final CatalogsApiException Catalogs_catalogsProductGroupsCreate_403_Exception = new CatalogsApiException(403, "Forbidden. Account not approved for catalog product group mutations yet.");
    public static final CatalogsApiException Catalogs_catalogsProductGroupsCreate_409_Exception = new CatalogsApiException(409, "Conflict. Can't create this catalogs product group with this value.");
    public static final CatalogsApiException Catalogs_catalogsProductGroupsDelete_204_Exception = new CatalogsApiException(204, "Catalogs Product Group deleted successfully.");
    public static final CatalogsApiException Catalogs_catalogsProductGroupsDelete_400_Exception = new CatalogsApiException(400, "Invalid catalogs product group id parameters.");
    public static final CatalogsApiException Catalogs_catalogsProductGroupsDelete_401_Exception = new CatalogsApiException(401, "Unauthorized access.");
    public static final CatalogsApiException Catalogs_catalogsProductGroupsDelete_403_Exception = new CatalogsApiException(403, "Forbidden. Account not approved for catalog product group mutations yet.");
    public static final CatalogsApiException Catalogs_catalogsProductGroupsDelete_404_Exception = new CatalogsApiException(404, "Catalogs product group not found.");
    public static final CatalogsApiException Catalogs_catalogsProductGroupsDelete_409_Exception = new CatalogsApiException(409, "Conflict. Can't delete this catalogs product group.");
    public static final CatalogsApiException Catalogs_catalogsProductGroupsGet_200_Exception = new CatalogsApiException(200, "Success");
    public static final CatalogsApiException Catalogs_catalogsProductGroupsGet_400_Exception = new CatalogsApiException(400, "Invalid catalogs product group id parameters.");
    public static final CatalogsApiException Catalogs_catalogsProductGroupsGet_401_Exception = new CatalogsApiException(401, "Unauthorized access.");
    public static final CatalogsApiException Catalogs_catalogsProductGroupsGet_403_Exception = new CatalogsApiException(403, "Forbidden. Account not approved for catalog product group mutations yet.");
    public static final CatalogsApiException Catalogs_catalogsProductGroupsGet_404_Exception = new CatalogsApiException(404, "Catalogs product group not found.");
    public static final CatalogsApiException Catalogs_catalogsProductGroupsGet_409_Exception = new CatalogsApiException(409, "Conflict. Can't get a catalogs product group without an existing catalog.");
    public static final CatalogsApiException Catalogs_catalogsProductGroupsList_200_Exception = new CatalogsApiException(200, "Success");
    public static final CatalogsApiException Catalogs_catalogsProductGroupsList_400_Exception = new CatalogsApiException(400, "Invalid feed parameters.");
    public static final CatalogsApiException Catalogs_catalogsProductGroupsList_401_Exception = new CatalogsApiException(401, "Unauthorized access.");
    public static final CatalogsApiException Catalogs_catalogsProductGroupsList_403_Exception = new CatalogsApiException(403, "Forbidden. Account not approved for catalog product group mutations yet.");
    public static final CatalogsApiException Catalogs_catalogsProductGroupsList_404_Exception = new CatalogsApiException(404, "Data feed not found.");
    public static final CatalogsApiException Catalogs_catalogsProductGroupsList_409_Exception = new CatalogsApiException(409, "Conflict. Can't create this catalogs product group with this value.");
    public static final CatalogsApiException Catalogs_catalogsProductGroupsProductCountsGet_200_Exception = new CatalogsApiException(200, "Success");
    public static final CatalogsApiException Catalogs_catalogsProductGroupsProductCountsGet_404_Exception = new CatalogsApiException(404, "Product Group Not Found.");
    public static final CatalogsApiException Catalogs_catalogsProductGroupsProductCountsGet_409_Exception = new CatalogsApiException(409, "Can't access this feature without an existing catalog.");
    public static final CatalogsApiException Catalogs_catalogsProductGroupsUpdate_200_Exception = new CatalogsApiException(200, "Success");
    public static final CatalogsApiException Catalogs_catalogsProductGroupsUpdate_400_Exception = new CatalogsApiException(400, "Invalid parameters.");
    public static final CatalogsApiException Catalogs_catalogsProductGroupsUpdate_401_Exception = new CatalogsApiException(401, "Unauthorized access.");
    public static final CatalogsApiException Catalogs_catalogsProductGroupsUpdate_403_Exception = new CatalogsApiException(403, "Forbidden. Account not approved for catalog product group mutations yet.");
    public static final CatalogsApiException Catalogs_catalogsProductGroupsUpdate_404_Exception = new CatalogsApiException(404, "Catalogs product group not found.");
    public static final CatalogsApiException Catalogs_catalogsProductGroupsUpdate_409_Exception = new CatalogsApiException(409, "Conflict. Can't update this catalogs product group to this value.");
    public static final CatalogsApiException Catalogs_feedProcessingResultsList_200_Exception = new CatalogsApiException(200, "Success");
    public static final CatalogsApiException Catalogs_feedProcessingResultsList_400_Exception = new CatalogsApiException(400, "Invalid parameters.");
    public static final CatalogsApiException Catalogs_feedProcessingResultsList_401_Exception = new CatalogsApiException(401, "Unauthorized access.");
    public static final CatalogsApiException Catalogs_feedProcessingResultsList_404_Exception = new CatalogsApiException(404, "Feed not found.");
    public static final CatalogsApiException Catalogs_feedsCreate_201_Exception = new CatalogsApiException(201, "Success");
    public static final CatalogsApiException Catalogs_feedsCreate_400_Exception = new CatalogsApiException(400, "Invalid feed parameters.");
    public static final CatalogsApiException Catalogs_feedsCreate_401_Exception = new CatalogsApiException(401, "Unauthorized access.");
    public static final CatalogsApiException Catalogs_feedsCreate_403_Exception = new CatalogsApiException(403, "Business account required.");
    public static final CatalogsApiException Catalogs_feedsCreate_409_Exception = new CatalogsApiException(409, "User website required.");
    public static final CatalogsApiException Catalogs_feedsCreate_422_Exception = new CatalogsApiException(422, "Unique feed name is required.");
    public static final CatalogsApiException Catalogs_feedsCreate_501_Exception = new CatalogsApiException(501, "Not implemented (absent \"default_country\" or \"default_locale\").");
    public static final CatalogsApiException Catalogs_feedsDelete_204_Exception = new CatalogsApiException(204, "Feed deleted successfully.");
    public static final CatalogsApiException Catalogs_feedsDelete_400_Exception = new CatalogsApiException(400, "Invalid feed parameters.");
    public static final CatalogsApiException Catalogs_feedsDelete_403_Exception = new CatalogsApiException(403, "Forbidden. Account not approved for feed mutations yet.");
    public static final CatalogsApiException Catalogs_feedsDelete_404_Exception = new CatalogsApiException(404, "Data feed not found.");
    public static final CatalogsApiException Catalogs_feedsDelete_409_Exception = new CatalogsApiException(409, "Conflict. Can't delete a feed with active promotions.");
    public static final CatalogsApiException Catalogs_feedsGet_200_Exception = new CatalogsApiException(200, "Success");
    public static final CatalogsApiException Catalogs_feedsGet_400_Exception = new CatalogsApiException(400, "Invalid feed parameters.");
    public static final CatalogsApiException Catalogs_feedsGet_401_Exception = new CatalogsApiException(401, "Unauthorized access.");
    public static final CatalogsApiException Catalogs_feedsGet_404_Exception = new CatalogsApiException(404, "Data feed not found.");
    public static final CatalogsApiException Catalogs_feedsList_200_Exception = new CatalogsApiException(200, "Success");
    public static final CatalogsApiException Catalogs_feedsList_400_Exception = new CatalogsApiException(400, "Invalid parameters.");
    public static final CatalogsApiException Catalogs_feedsList_401_Exception = new CatalogsApiException(401, "Unauthorized access.");
    public static final CatalogsApiException Catalogs_feedsUpdate_200_Exception = new CatalogsApiException(200, "Success");
    public static final CatalogsApiException Catalogs_feedsUpdate_400_Exception = new CatalogsApiException(400, "Invalid feed parameters.");
    public static final CatalogsApiException Catalogs_feedsUpdate_403_Exception = new CatalogsApiException(403, "Forbidden. Account not approved for feed mutations yet.");
    public static final CatalogsApiException Catalogs_feedsUpdate_404_Exception = new CatalogsApiException(404, "Data feed not found.");
    public static final CatalogsApiException Catalogs_itemsBatchGet_200_Exception = new CatalogsApiException(200, "Response containing the requested catalogs items batch");
    public static final CatalogsApiException Catalogs_itemsBatchGet_401_Exception = new CatalogsApiException(401, "Not authenticated to access catalogs items batch");
    public static final CatalogsApiException Catalogs_itemsBatchGet_403_Exception = new CatalogsApiException(403, "Not authorized to access catalogs items batch");
    public static final CatalogsApiException Catalogs_itemsBatchGet_404_Exception = new CatalogsApiException(404, "Catalogs items batch not found");
    public static final CatalogsApiException Catalogs_itemsBatchGet_405_Exception = new CatalogsApiException(405, "Method Not Allowed.");
    public static final CatalogsApiException Catalogs_itemsBatchPost_200_Exception = new CatalogsApiException(200, "Response containing the requested catalogs items batch");
    public static final CatalogsApiException Catalogs_itemsBatchPost_400_Exception = new CatalogsApiException(400, "Invalid request parameters.");
    public static final CatalogsApiException Catalogs_itemsBatchPost_401_Exception = new CatalogsApiException(401, "Not authenticated to post catalogs items");
    public static final CatalogsApiException Catalogs_itemsBatchPost_403_Exception = new CatalogsApiException(403, "Not authorized to post catalogs items");
    public static final CatalogsApiException Catalogs_itemsGet_200_Exception = new CatalogsApiException(200, "Response containing the requested catalogs items");
    public static final CatalogsApiException Catalogs_itemsGet_400_Exception = new CatalogsApiException(400, "Invalid request parameters.");
    public static final CatalogsApiException Catalogs_itemsGet_401_Exception = new CatalogsApiException(401, "Not authorized to access catalogs items");
    public static final CatalogsApiException Catalogs_itemsGet_403_Exception = new CatalogsApiException(403, "Not authorized to access catalogs items");
    public static final CatalogsApiException Catalogs_itemsIssuesList_200_Exception = new CatalogsApiException(200, "Success");
    public static final CatalogsApiException Catalogs_itemsIssuesList_401_Exception = new CatalogsApiException(401, "Unauthorized access.");
    public static final CatalogsApiException Catalogs_itemsIssuesList_404_Exception = new CatalogsApiException(404, "Processing Result not found.");
    public static final CatalogsApiException Catalogs_itemsIssuesList_501_Exception = new CatalogsApiException(501, "Not implemented.");
    public static final CatalogsApiException Catalogs_productsByProductGroupFilterList_200_Exception = new CatalogsApiException(200, "Success");
    public static final CatalogsApiException Catalogs_productsByProductGroupFilterList_401_Exception = new CatalogsApiException(401, "Unauthorized access.");
    public static final CatalogsApiException Catalogs_productsByProductGroupFilterList_409_Exception = new CatalogsApiException(409, "Conflict. Can't get products.");
    

}