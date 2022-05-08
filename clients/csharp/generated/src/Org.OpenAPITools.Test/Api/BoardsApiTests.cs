/*
 * Pinterest REST API
 *
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */

using System;
using System.IO;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Reflection;
using RestSharp;
using NUnit.Framework;

using Org.OpenAPITools.Client;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Model;

namespace Org.OpenAPITools.Test
{
    /// <summary>
    ///  Class for testing BoardsApi
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by OpenAPI Generator (https://openapi-generator.tech).
    /// Please update the test case below to test the API endpoint.
    /// </remarks>
    public class BoardsApiTests
    {
        private BoardsApi instance;

        /// <summary>
        /// Setup before each unit test
        /// </summary>
        [SetUp]
        public void Init()
        {
            instance = new BoardsApi();
        }

        /// <summary>
        /// Clean up after each unit test
        /// </summary>
        [TearDown]
        public void Cleanup()
        {

        }

        /// <summary>
        /// Test an instance of BoardsApi
        /// </summary>
        [Test]
        public void InstanceTest()
        {
            // TODO uncomment below to test 'IsInstanceOf' BoardsApi
            //Assert.IsInstanceOf(typeof(BoardsApi), instance);
        }

        
        /// <summary>
        /// Test BoardSectionsCreate
        /// </summary>
        [Test]
        public void BoardSectionsCreateTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string boardId = null;
            //BoardSection boardSection = null;
            //var response = instance.BoardSectionsCreate(boardId, boardSection);
            //Assert.IsInstanceOf(typeof(BoardSection), response, "response is BoardSection");
        }
        
        /// <summary>
        /// Test BoardSectionsDelete
        /// </summary>
        [Test]
        public void BoardSectionsDeleteTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string boardId = null;
            //string sectionId = null;
            //instance.BoardSectionsDelete(boardId, sectionId);
            
        }
        
        /// <summary>
        /// Test BoardSectionsList
        /// </summary>
        [Test]
        public void BoardSectionsListTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string boardId = null;
            //string bookmark = null;
            //int? pageSize = null;
            //var response = instance.BoardSectionsList(boardId, bookmark, pageSize);
            //Assert.IsInstanceOf(typeof(Paginated), response, "response is Paginated");
        }
        
        /// <summary>
        /// Test BoardSectionsListPins
        /// </summary>
        [Test]
        public void BoardSectionsListPinsTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string boardId = null;
            //string sectionId = null;
            //string bookmark = null;
            //int? pageSize = null;
            //var response = instance.BoardSectionsListPins(boardId, sectionId, bookmark, pageSize);
            //Assert.IsInstanceOf(typeof(Paginated), response, "response is Paginated");
        }
        
        /// <summary>
        /// Test BoardSectionsUpdate
        /// </summary>
        [Test]
        public void BoardSectionsUpdateTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string boardId = null;
            //string sectionId = null;
            //BoardSection boardSection = null;
            //var response = instance.BoardSectionsUpdate(boardId, sectionId, boardSection);
            //Assert.IsInstanceOf(typeof(BoardSection), response, "response is BoardSection");
        }
        
        /// <summary>
        /// Test BoardsCreate
        /// </summary>
        [Test]
        public void BoardsCreateTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //Board board = null;
            //var response = instance.BoardsCreate(board);
            //Assert.IsInstanceOf(typeof(Board), response, "response is Board");
        }
        
        /// <summary>
        /// Test BoardsDelete
        /// </summary>
        [Test]
        public void BoardsDeleteTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string boardId = null;
            //instance.BoardsDelete(boardId);
            
        }
        
        /// <summary>
        /// Test BoardsGet
        /// </summary>
        [Test]
        public void BoardsGetTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string boardId = null;
            //var response = instance.BoardsGet(boardId);
            //Assert.IsInstanceOf(typeof(Board), response, "response is Board");
        }
        
        /// <summary>
        /// Test BoardsList
        /// </summary>
        [Test]
        public void BoardsListTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string bookmark = null;
            //int? pageSize = null;
            //string privacy = null;
            //var response = instance.BoardsList(bookmark, pageSize, privacy);
            //Assert.IsInstanceOf(typeof(Paginated), response, "response is Paginated");
        }
        
        /// <summary>
        /// Test BoardsListPins
        /// </summary>
        [Test]
        public void BoardsListPinsTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string boardId = null;
            //string bookmark = null;
            //int? pageSize = null;
            //var response = instance.BoardsListPins(boardId, bookmark, pageSize);
            //Assert.IsInstanceOf(typeof(Paginated), response, "response is Paginated");
        }
        
        /// <summary>
        /// Test BoardsUpdate
        /// </summary>
        [Test]
        public void BoardsUpdateTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string boardId = null;
            //BoardUpdate boardUpdate = null;
            //var response = instance.BoardsUpdate(boardId, boardUpdate);
            //Assert.IsInstanceOf(typeof(Board), response, "response is Board");
        }
        
    }

}