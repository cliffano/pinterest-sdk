/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 */


package org.openapitools.server.api

import org.openapitools.server.model.Board
import org.openapitools.server.model.BoardSection
import org.openapitools.server.model.BoardUpdate
import org.openapitools.server.model.Error
import org.openapitools.server.model.Paginated

import java.io.File

import org.scalatra.ScalatraServlet
import org.scalatra.swagger._
import org.json4s._
import org.json4s.JsonDSL._
import org.scalatra.json.{ JValueResult, JacksonJsonSupport }
import org.scalatra.servlet.{ FileUploadSupport, MultipartConfig, SizeConstraintExceededException }

import scala.collection.JavaConverters._

class BoardsApi(implicit val swagger: Swagger) extends ScalatraServlet
  with FileUploadSupport
  with JacksonJsonSupport
  with SwaggerSupport {
  protected implicit val jsonFormats: Formats = DefaultFormats

  protected val applicationDescription: String = "BoardsApi"

  before() {
    contentType = formats("json")
    response.headers += ("Access-Control-Allow-Origin" -> "*")
  }
  

  val boardSectionsCreateOperation = (apiOperation[BoardSection]("boardSectionsCreate")
    summary "Create board section"
    parameters(pathParam[String]("boardId").description(""), bodyParam[BoardSection]("boardSection").description(""))
  )

  post("/boards/:board_id/sections", operation(boardSectionsCreateOperation)) {
    val boardId = params.getOrElse("boardId", halt(400))
    //println("boardId: " + boardId)
    //println("boardSection: " + boardSection)
  }

  

  val boardSectionsDeleteOperation = (apiOperation[Unit]("boardSectionsDelete")
    summary "Delete board section"
    parameters(pathParam[String]("boardId").description(""), pathParam[String]("sectionId").description(""))
  )

  delete("/boards/:board_id/sections/:section_id", operation(boardSectionsDeleteOperation)) {
    val boardId = params.getOrElse("boardId", halt(400))
    //println("boardId: " + boardId)
    val sectionId = params.getOrElse("sectionId", halt(400))
    //println("sectionId: " + sectionId)
  }

  

  val boardSectionsListOperation = (apiOperation[Paginated]("boardSectionsList")
    summary "List board sections"
    parameters(pathParam[String]("boardId").description(""), queryParam[String]("bookmark").description("").optional, queryParam[Int]("pageSize").description("").optional.defaultValue(25))
  )

  get("/boards/:board_id/sections", operation(boardSectionsListOperation)) {
    val boardId = params.getOrElse("boardId", halt(400))
    //println("boardId: " + boardId)
            val bookmark = params.getAs[String]("bookmark")

    //println("bookmark: " + bookmark)
            val pageSize = params.getAs[Int]("pageSize")

    //println("pageSize: " + pageSize)
  }

  

  val boardSectionsListPinsOperation = (apiOperation[Paginated]("boardSectionsListPins")
    summary "List Pins on board section"
    parameters(pathParam[String]("boardId").description(""), pathParam[String]("sectionId").description(""), queryParam[String]("bookmark").description("").optional, queryParam[Int]("pageSize").description("").optional.defaultValue(25))
  )

  get("/boards/:board_id/sections/:section_id/pins", operation(boardSectionsListPinsOperation)) {
    val boardId = params.getOrElse("boardId", halt(400))
    //println("boardId: " + boardId)
    val sectionId = params.getOrElse("sectionId", halt(400))
    //println("sectionId: " + sectionId)
            val bookmark = params.getAs[String]("bookmark")

    //println("bookmark: " + bookmark)
            val pageSize = params.getAs[Int]("pageSize")

    //println("pageSize: " + pageSize)
  }

  

  val boardSectionsUpdateOperation = (apiOperation[BoardSection]("boardSectionsUpdate")
    summary "Update board section"
    parameters(pathParam[String]("boardId").description(""), pathParam[String]("sectionId").description(""), bodyParam[BoardSection]("boardSection").description(""))
  )

  patch("/boards/:board_id/sections/:section_id", operation(boardSectionsUpdateOperation)) {
    val boardId = params.getOrElse("boardId", halt(400))
    //println("boardId: " + boardId)
    val sectionId = params.getOrElse("sectionId", halt(400))
    //println("sectionId: " + sectionId)
    //println("boardSection: " + boardSection)
  }

  

  val boardsCreateOperation = (apiOperation[Board]("boardsCreate")
    summary "Create board"
    parameters(bodyParam[Board]("board").description(""))
  )

  post("/boards", operation(boardsCreateOperation)) {
    //println("board: " + board)
  }

  

  val boardsDeleteOperation = (apiOperation[Unit]("boardsDelete")
    summary "Delete board"
    parameters(pathParam[String]("boardId").description(""))
  )

  delete("/boards/:board_id", operation(boardsDeleteOperation)) {
    val boardId = params.getOrElse("boardId", halt(400))
    //println("boardId: " + boardId)
  }

  

  val boardsGetOperation = (apiOperation[Board]("boardsGet")
    summary "Get board"
    parameters(pathParam[String]("boardId").description(""))
  )

  get("/boards/:board_id", operation(boardsGetOperation)) {
    val boardId = params.getOrElse("boardId", halt(400))
    //println("boardId: " + boardId)
  }

  

  val boardsListOperation = (apiOperation[Paginated]("boardsList")
    summary "List boards"
    parameters(queryParam[String]("bookmark").description("").optional, queryParam[Int]("pageSize").description("").optional.defaultValue(25), queryParam[String]("privacy").description("").optional)
  )

  get("/boards", operation(boardsListOperation)) {
            val bookmark = params.getAs[String]("bookmark")

    //println("bookmark: " + bookmark)
            val pageSize = params.getAs[Int]("pageSize")

    //println("pageSize: " + pageSize)
            val privacy = params.getAs[String]("privacy")

    //println("privacy: " + privacy)
  }

  

  val boardsListPinsOperation = (apiOperation[Paginated]("boardsListPins")
    summary "List Pins on board"
    parameters(pathParam[String]("boardId").description(""), queryParam[String]("bookmark").description("").optional, queryParam[Int]("pageSize").description("").optional.defaultValue(25))
  )

  get("/boards/:board_id/pins", operation(boardsListPinsOperation)) {
    val boardId = params.getOrElse("boardId", halt(400))
    //println("boardId: " + boardId)
            val bookmark = params.getAs[String]("bookmark")

    //println("bookmark: " + bookmark)
            val pageSize = params.getAs[Int]("pageSize")

    //println("pageSize: " + pageSize)
  }

  

  val boardsUpdateOperation = (apiOperation[Board]("boardsUpdate")
    summary "Update board"
    parameters(pathParam[String]("boardId").description(""), bodyParam[BoardUpdate]("boardUpdate").description(""))
  )

  patch("/boards/:board_id", operation(boardsUpdateOperation)) {
    val boardId = params.getOrElse("boardId", halt(400))
    //println("boardId: " + boardId)
    //println("boardUpdate: " + boardUpdate)
  }

}
