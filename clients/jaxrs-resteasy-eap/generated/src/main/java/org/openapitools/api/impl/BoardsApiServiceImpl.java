package org.openapitools.api.impl;

import org.openapitools.api.*;
import org.openapitools.model.*;


import org.openapitools.model.Board;
import org.openapitools.model.BoardSection;
import org.openapitools.model.BoardSectionsList200Response;
import org.openapitools.model.BoardUpdate;
import org.openapitools.model.BoardsList200Response;
import org.openapitools.model.BoardsListPins200Response;
import org.openapitools.model.Error;

import java.util.List;

import java.io.InputStream;

import javax.validation.constraints.*;
import javax.validation.Valid;
import javax.ws.rs.core.Response;
import javax.ws.rs.core.SecurityContext;

@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaResteasyEapServerCodegen", date = "2024-03-14T23:04:54.712028318Z[Etc/UTC]", comments = "Generator version: 7.4.0")
public class BoardsApiServiceImpl implements BoardsApi {
      public Response boardSectionsCreate(String boardId,BoardSection boardSection,String adAccountId,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response boardSectionsDelete(String boardId,String sectionId,String adAccountId,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response boardSectionsList(String boardId,String adAccountId,String bookmark,Integer pageSize,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response boardSectionsListPins(String boardId,String sectionId,String adAccountId,String bookmark,Integer pageSize,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response boardSectionsUpdate(String boardId,String sectionId,BoardSection boardSection,String adAccountId,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response boardsCreate(Board board,String adAccountId,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response boardsDelete(String boardId,String adAccountId,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response boardsGet(String boardId,String adAccountId,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response boardsList(String adAccountId,String bookmark,Integer pageSize,String privacy,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response boardsListPins(String boardId,String bookmark,Integer pageSize,List<String> creativeTypes,String adAccountId,Boolean pinMetrics,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
      public Response boardsUpdate(String boardId,BoardUpdate boardUpdate,String adAccountId,SecurityContext securityContext) {
      // do some magic!
      return Response.ok().build();
  }
}
