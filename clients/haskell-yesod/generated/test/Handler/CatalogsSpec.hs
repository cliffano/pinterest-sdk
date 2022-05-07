{-# LANGUAGE NoImplicitPrelude #-}
{-# LANGUAGE OverloadedStrings #-}
module Handler.CatalogsSpec (spec) where

import           TestImport


spec :: Spec
spec = withApp $ do

    describe "postCatalogsProductGroupsR" $
        it "returns 501 Not Implemented" $ do
            post CatalogsProductGroupsR
            statusIs 501

    describe "deleteCatalogsProductGroupsByTextR" $
        it "returns 501 Not Implemented" $ do
            performMethod "DELETE" $ CatalogsProductGroupsByTextR "productGroupId_example"
            statusIs 501

    describe "getCatalogsProductGroupsR" $
        it "returns 501 Not Implemented" $ do
            get CatalogsProductGroupsR
            statusIs 501

    describe "patchCatalogsProductGroupsByTextR" $
        it "returns 501 Not Implemented" $ do
            performMethod "PATCH" $ CatalogsProductGroupsByTextR "productGroupId_example"
            statusIs 501

    describe "getCatalogsFeedsByTextProcessingResultsR" $
        it "returns 501 Not Implemented" $ do
            get $ CatalogsFeedsByTextProcessingResultsR "feedId_example"
            statusIs 501

    describe "postCatalogsFeedsR" $
        it "returns 501 Not Implemented" $ do
            post CatalogsFeedsR
            statusIs 501

    describe "deleteCatalogsFeedsByTextR" $
        it "returns 501 Not Implemented" $ do
            performMethod "DELETE" $ CatalogsFeedsByTextR "feedId_example"
            statusIs 501

    describe "getCatalogsFeedsByTextR" $
        it "returns 501 Not Implemented" $ do
            get $ CatalogsFeedsByTextR "feedId_example"
            statusIs 501

    describe "getCatalogsFeedsR" $
        it "returns 501 Not Implemented" $ do
            get CatalogsFeedsR
            statusIs 501

    describe "patchCatalogsFeedsByTextR" $
        it "returns 501 Not Implemented" $ do
            performMethod "PATCH" $ CatalogsFeedsByTextR "feedId_example"
            statusIs 501

    describe "getCatalogsItemsR" $
        it "returns 501 Not Implemented" $ do
            get CatalogsItemsR
            statusIs 501

    describe "getCatalogsItemsBatchByTextR" $
        it "returns 501 Not Implemented" $ do
            get $ CatalogsItemsBatchByTextR "595953100599279259-66753b9bb65c46c49bd8503b27fecf9e"
            statusIs 501

    describe "postCatalogsItemsBatchR" $
        it "returns 501 Not Implemented" $ do
            post CatalogsItemsBatchR
            statusIs 501
