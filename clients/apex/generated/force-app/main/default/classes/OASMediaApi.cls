/*
 * Pinterest REST API
 * Pinterest\'s REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by the OAS code generator program.
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

public class OASMediaApi {
    OASClient client;

    public OASMediaApi(OASClient client) {
        this.client = client;
    }

    public OASMediaApi() {
        this.client = new OASClient();
    }

    public OASClient getClient() {
        return this.client;
    }

    /**
     * Register media upload
     * Register your intent to upload media\n\nThe response includes all of the information needed to upload the media\nto Pinterest.\n\nTo upload the media, make an HTTP POST request (using &lt;tt&gt;curl&lt;/tt&gt;, for\nexample) to &lt;tt&gt;upload_url&lt;/tt&gt; using the &lt;tt&gt;Content-Type&lt;/tt&gt; header\nvalue. Send the media file\&#39;s contents as the request\&#39;s &lt;tt&gt;file&lt;/tt&gt;\nparameter and also include all of the parameters from\n&lt;tt&gt;upload_parameters&lt;/tt&gt;.\n\n&lt;strong&gt;&lt;a href&#x3D;\&#39;/docs/solutions/content-apps/#creatingvideopins\&#39;&gt;Learn more&lt;/a&gt;&lt;/strong&gt; about video Pin creation.
     * @param oaSMediaUploadRequest Create a media upload request (required)
     * @return OASMediaUpload
     * @throws OAS.ApiException if fails to make API call
     */
    public OASMediaUpload mediaCreate(Map<String, Object> params) {
        client.assertNotNull(params.get('oaSMediaUploadRequest'), 'oaSMediaUploadRequest');
        List<OAS.Param> query = new List<OAS.Param>();
        List<OAS.Param> form = new List<OAS.Param>();

        return (OASMediaUpload) client.invoke(
            'POST', '/media',
            (OASMediaUploadRequest) params.get('oaSMediaUploadRequest'),
            query, form,
            new Map<String, Object>(),
            new Map<String, Object>(),
            new List<String>{ 'application/json' },
            new List<String>{ 'application/json' },
            new List<String> { 'pinterest_oauth2' },
            OASMediaUpload.class
        );
    }
    /**
     * Get media upload details
     * Get details for a registered media upload, including its current status.\n\n&lt;strong&gt;&lt;a href&#x3D;\&#39;/docs/solutions/content-apps/#creatingvideopins\&#39;&gt;Learn more&lt;/a&gt;&lt;/strong&gt; about video Pin creation.
     * @param mediaId Media identifier (required)
     * @return OASMediaUploadDetails
     * @throws OAS.ApiException if fails to make API call
     */
    public OASMediaUploadDetails mediaGet(Map<String, Object> params) {
        client.assertNotNull(params.get('mediaId'), 'mediaId');
        List<OAS.Param> query = new List<OAS.Param>();
        List<OAS.Param> form = new List<OAS.Param>();

        return (OASMediaUploadDetails) client.invoke(
            'GET', '/media/{media_id}', '',
            query, form,
            new Map<String, Object>{
                'media_id' => (String) params.get('mediaId')
            },
            new Map<String, Object>(),
            new List<String>{ 'application/json' },
            new List<String>(),
            new List<String> { 'pinterest_oauth2' },
            OASMediaUploadDetails.class
        );
    }
    /**
     * List media uploads
     * List media uploads filtered by given parameters.\n\n&lt;strong&gt;&lt;a href&#x3D;\&#39;/docs/solutions/content-apps/#creatingvideopins\&#39;&gt;Learn more&lt;/a&gt;&lt;/strong&gt; about video Pin creation.
     * @param bookmark Cursor used to fetch the next page of items (optional)
     * @param pageSize Maximum number of items to include in a single page of the response. See documentation on &lt;a href&#x3D;\&#39;/docs/api/v5/#tag/Pagination\&#39;&gt;Pagination&lt;/a&gt; for more information. (optional, default to 25)
     * @return OASPaginated
     * @throws OAS.ApiException if fails to make API call
     */
    public OASPaginated mediaList(Map<String, Object> params) {
        List<OAS.Param> query = new List<OAS.Param>();

        // cast query params to verify their expected type
        query.addAll(client.makeParam('bookmark', (String) params.get('bookmark')));
        query.addAll(client.makeParam('page_size', (Integer) params.get('pageSize')));

        List<OAS.Param> form = new List<OAS.Param>();

        return (OASPaginated) client.invoke(
            'GET', '/media', '',
            query, form,
            new Map<String, Object>(),
            new Map<String, Object>(),
            new List<String>{ 'application/json' },
            new List<String>(),
            new List<String> { 'pinterest_oauth2' },
            OASPaginated.class
        );
    }
}