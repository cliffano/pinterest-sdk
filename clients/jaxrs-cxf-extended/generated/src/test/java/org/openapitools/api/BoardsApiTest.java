/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


package org.openapitools.api;

import org.openapitools.model.Board;
import org.openapitools.model.BoardSection;
import org.openapitools.model.BoardUpdate;
import org.openapitools.model.Error;
import org.openapitools.model.Paginated;
import org.junit.Test;
import org.junit.Before;
import static org.junit.Assert.*;

import javax.ws.rs.core.MediaType;
import javax.ws.rs.core.Response;
import org.apache.cxf.jaxrs.client.JAXRSClientFactory;
import org.apache.cxf.jaxrs.client.ClientConfiguration;
import org.apache.cxf.jaxrs.client.WebClient;
import org.apache.cxf.jaxrs.ext.multipart.Attachment;


import com.fasterxml.jackson.jaxrs.json.JacksonJsonProvider;
import com.fasterxml.jackson.jaxrs.xml.JacksonXMLProvider;
import org.apache.cxf.jaxrs.provider.MultipartProvider;

import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Set;


/**
 * Pinterest REST API
 *
 * <p>Pinterest's REST API
 *
 * API tests for BoardsApi.
 */
public class BoardsApiTest {

    private BoardsApi api;

    @Before
    public void setup() {
        List<?> providers = Arrays.asList(new JacksonJsonProvider(), new JacksonXMLProvider(), new MultipartProvider());

        api = JAXRSClientFactory.create("https://api.pinterest.com/v5", BoardsApi.class, providers);
        org.apache.cxf.jaxrs.client.Client client = WebClient.client(api);

        ClientConfiguration config = WebClient.getConfig(client);
    }

    
    /**
     * Create board section
     *
     * Create a board section on a board owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.
     *
     * @throws ApiException if the API call fails
     */
    @Test
    public void boardSectionsCreateTest() throws Exception {
        // TODO: assign appropriate parameter values
        String boardId = null;
        BoardSection boardSection = null;

        // TODO: delete this line and uncomment the next
        // BoardSection response = api.boardSectionsCreate(boardId, boardSection);
        // TODO: complete test assertions
    }
    
    /**
     * Delete board section
     *
     * Delete a board section on a board owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.
     *
     * @throws ApiException if the API call fails
     */
    @Test
    public void boardSectionsDeleteTest() throws Exception {
        // TODO: assign appropriate parameter values
        String boardId = null;
        String sectionId = null;

        // TODO: delete this line and uncomment the next
        // api.boardSectionsDelete(boardId, sectionId);
    }
    
    /**
     * List board sections
     *
     * Get a list of all board sections from a board owned by the \&quot;operation user_account\&quot; - or a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.
     *
     * @throws ApiException if the API call fails
     */
    @Test
    public void boardSectionsListTest() throws Exception {
        // TODO: assign appropriate parameter values
        String boardId = null;
        String bookmark = null;
        Integer pageSize = null;

        // TODO: delete this line and uncomment the next
        // Paginated response = api.boardSectionsList(boardId, bookmark, pageSize);
        // TODO: complete test assertions
    }
    
    /**
     * List Pins on board section
     *
     * Get a list of the Pins on a board section of a board owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.
     *
     * @throws ApiException if the API call fails
     */
    @Test
    public void boardSectionsListPinsTest() throws Exception {
        // TODO: assign appropriate parameter values
        String boardId = null;
        String sectionId = null;
        String bookmark = null;
        Integer pageSize = null;

        // TODO: delete this line and uncomment the next
        // Paginated response = api.boardSectionsListPins(boardId, sectionId, bookmark, pageSize);
        // TODO: complete test assertions
    }
    
    /**
     * Update board section
     *
     * Update a board section on a board owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.
     *
     * @throws ApiException if the API call fails
     */
    @Test
    public void boardSectionsUpdateTest() throws Exception {
        // TODO: assign appropriate parameter values
        String boardId = null;
        String sectionId = null;
        BoardSection boardSection = null;

        // TODO: delete this line and uncomment the next
        // BoardSection response = api.boardSectionsUpdate(boardId, sectionId, boardSection);
        // TODO: complete test assertions
    }
    
    /**
     * Create board
     *
     * Create a board owned by the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.
     *
     * @throws ApiException if the API call fails
     */
    @Test
    public void boardsCreateTest() throws Exception {
        // TODO: assign appropriate parameter values
        Board board = null;

        // TODO: delete this line and uncomment the next
        // Board response = api.boardsCreate(board);
        // TODO: complete test assertions
    }
    
    /**
     * Delete board
     *
     * Delete a board owned by the \&quot;operation user_account\&quot;. - By default, the \&quot;operation user_account\&quot; is the token user_account.
     *
     * @throws ApiException if the API call fails
     */
    @Test
    public void boardsDeleteTest() throws Exception {
        // TODO: assign appropriate parameter values
        String boardId = null;

        // TODO: delete this line and uncomment the next
        // api.boardsDelete(boardId);
    }
    
    /**
     * Get board
     *
     * Get a board owned by the operation user_account - or a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.
     *
     * @throws ApiException if the API call fails
     */
    @Test
    public void boardsGetTest() throws Exception {
        // TODO: assign appropriate parameter values
        String boardId = null;

        // TODO: delete this line and uncomment the next
        // Board response = api.boardsGet(boardId);
        // TODO: complete test assertions
    }
    
    /**
     * List boards
     *
     * Get a list of the boards owned by the \&quot;operation user_account\&quot; + group boards where this account is a collaborator  Optional: Specify a privacy type (public, protected, or secret) to indicate which boards to return. - If no privacy is specified, all boards that can be returned (based on the scopes of the token and ad_account role if applicable) will be returned.
     *
     * @throws ApiException if the API call fails
     */
    @Test
    public void boardsListTest() throws Exception {
        // TODO: assign appropriate parameter values
        String bookmark = null;
        Integer pageSize = null;
        String privacy = null;

        // TODO: delete this line and uncomment the next
        // Paginated response = api.boardsList(bookmark, pageSize, privacy);
        // TODO: complete test assertions
    }
    
    /**
     * List Pins on board
     *
     * Get a list of the Pins on a board owned by the \&quot;operation user_account\&quot; - or on a group board that has been shared with this account. - By default, the \&quot;operation user_account\&quot; is the token user_account.
     *
     * @throws ApiException if the API call fails
     */
    @Test
    public void boardsListPinsTest() throws Exception {
        // TODO: assign appropriate parameter values
        String boardId = null;
        String bookmark = null;
        Integer pageSize = null;

        // TODO: delete this line and uncomment the next
        // Paginated response = api.boardsListPins(boardId, bookmark, pageSize);
        // TODO: complete test assertions
    }
    
    /**
     * Update board
     *
     * Update a board owned by the \&quot;operating user_account\&quot;.
     *
     * @throws ApiException if the API call fails
     */
    @Test
    public void boardsUpdateTest() throws Exception {
        // TODO: assign appropriate parameter values
        String boardId = null;
        BoardUpdate boardUpdate = null;

        // TODO: delete this line and uncomment the next
        // Board response = api.boardsUpdate(boardId, boardUpdate);
        // TODO: complete test assertions
    }
    
}
