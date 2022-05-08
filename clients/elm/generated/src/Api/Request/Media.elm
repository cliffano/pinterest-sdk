{-
   Pinterest REST API
   Pinterest's REST API

   The version of the OpenAPI document: 5.3.0
   Contact: pinterest-api@pinterest.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git

   DO NOT EDIT THIS FILE MANUALLY.

   For more info on generating Elm code, see https://eriktim.github.io/openapi-elm/
-}


module Api.Request.Media exposing
    ( mediaCreate
    , mediaGet
    , mediaList
    )

import Api
import Api.Data
import Dict
import Http
import Json.Decode
import Json.Encode



{-| Register your intent to upload media  The response includes all of the information needed to upload the media to Pinterest.  To upload the media, make an HTTP POST request (using <tt>curl</tt>, for example) to <tt>upload_url</tt> using the <tt>Content-Type</tt> header value. Send the media file's contents as the request's <tt>file</tt> parameter and also include all of the parameters from <tt>upload_parameters</tt>.  <strong><a href='/docs/solutions/content-apps/#creatingvideopins'>Learn more</a></strong> about video Pin creation.
-}
mediaCreate : Api.Data.MediaUploadRequest -> Api.Request Api.Data.MediaUpload
mediaCreate mediaUploadRequest_body =
    Api.request
        "POST"
        "/media"
        []
        []
        []
        (Just (Api.Data.encodeMediaUploadRequest mediaUploadRequest_body))
        Api.Data.mediaUploadDecoder



{-| Get details for a registered media upload, including its current status.  <strong><a href='/docs/solutions/content-apps/#creatingvideopins'>Learn more</a></strong> about video Pin creation.
-}
mediaGet : String -> Api.Request Api.Data.MediaUploadDetails
mediaGet mediaId_path =
    Api.request
        "GET"
        "/media/{media_id}"
        [ ( "mediaId", identity mediaId_path ) ]
        []
        []
        Nothing
        Api.Data.mediaUploadDetailsDecoder



{-| List media uploads filtered by given parameters.  <strong><a href='/docs/solutions/content-apps/#creatingvideopins'>Learn more</a></strong> about video Pin creation.
-}
mediaList : Maybe String -> Maybe Int -> Api.Request Api.Data.Paginated
mediaList bookmark_query pageSize_query =
    Api.request
        "GET"
        "/media"
        []
        [ ( "bookmark", Maybe.map identity bookmark_query ), ( "page_size", Maybe.map String.fromInt pageSize_query ) ]
        []
        Nothing
        Api.Data.paginatedDecoder