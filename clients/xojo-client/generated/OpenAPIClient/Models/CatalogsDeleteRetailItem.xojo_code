#tag Class
Protected Class CatalogsDeleteRetailItem

	#tag Property, Flags = &h0
		#tag Note
			The catalog item id in the merchant namespace
		#tag EndNote
		item_id As String
	#tag EndProperty


	#tag Property, Flags = &h0
		operation As String
	#tag EndProperty


    #tag Enum, Name = OperationEnum, Type = Integer, Flags = &h0
        
        Create
        Update
        Upsert
        Delete
        
    #tag EndEnum


	#tag Method, Flags = &h0
		Shared Function OperationEnumToString(value As OperationEnum) As String
		  Select Case value
		    
		    Case OperationEnum.Create
		      Return "CREATE"
		    Case OperationEnum.Update
		      Return "UPDATE"
		    Case OperationEnum.Upsert
		      Return "UPSERT"
		    Case OperationEnum.Delete
		      Return "DELETE"
		    
		  End Select
		  Return ""
		End Function
	#tag EndMethod


	#tag ViewBehavior
		#tag ViewProperty
			Name="Index"
			Visible=true
			Group="ID"
			InitialValue="-2147483648"
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="Super"
			Visible=true
			Group="ID"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="Left"
			Visible=true
			Group="Position"
			InitialValue="0"
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="Top"
			Visible=true
			Group="Position"
			InitialValue="0"
			Type="Integer"
			EditorType=""
		#tag EndViewProperty
		#tag ViewProperty
			Name="item_id"
			Visible=false
			Group="Behavior"
			InitialValue=""
			Type="String"
			EditorType=""
		#tag EndViewProperty
	#tag EndViewBehavior
End Class
#tag EndClass

