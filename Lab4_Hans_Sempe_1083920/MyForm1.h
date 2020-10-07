#pragma once
# include <iostream>;
# include <fstream>
# include <iomanip>
# include <string>

namespace Lab4HansSempe1083920 {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System::IO;
	using namespace System::Data::OleDb;
	using namespace System::Text;
	using namespace System::Threading::Tasks;
	using namespace Microsoft::VisualBasic;
	
	
	
	/// <summary>
	/// Resumen de MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(23, 117);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(685, 264);
			this->dataGridView1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(23, 64);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 47);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Importar Datos";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(740, 406);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	//	DataView ImportarDatos(string nombrearchivo)
	//	{
	//		string conexion = ("Provider = Microsoft.ACE.OLEDB.12.0; Data Source = {0}; Extended Properties = 'Excel 12.0;' ", nombrearchivo);
	//
	//		OleDbConnection^ conector =  gcnew OleDbConnection();

	//		conector->Open();

			//OleDbConnection^ consulta = gcnew OleDbConnection("select * from [Denuncias por Violencia Intrafa]", conector);

	//		OleDbDataAdapter^ adaptador = gcnew OleDbDataAdapter
	//		{ 
				//SelectCommand = consulta 
	//		};
			

	//		DataSet^ ds = gcnew DataSet();

	//		adaptador->Fill(ds);

	//		conector->Close();

	//		return ds->Tables[0]->DefaultView;
	//	}

	// https : // www . youtube . com / watch ? v = r d e m h _ 8 s B S c

		void bubbleSort(int a[])
		{
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					for (int g = 0; g < 5; g++)
					{
						if (a[j] > a[j + 1])
						{
							int temp = a[j];
							a[j] = a[j + 1];
							a[j + 1] = temp;
						}
					}
				}
			}
		}

	};
}
