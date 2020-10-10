#pragma once
# include <iostream>;
# include <fstream>
# include <iomanip>
# include <string>

namespace Lab4HansSempe1083920 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;


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
	private: System::Windows::Forms::DataGridView^ dgvMatriz;
	protected:

	protected:

	private: System::Windows::Forms::OpenFileDialog^ ofdImportar;


	private: System::Windows::Forms::SaveFileDialog^ sfdExportar;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ txtPath;
	private: System::Windows::Forms::Button^ BTTNimportar;



	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dgvMatriz = (gcnew System::Windows::Forms::DataGridView());
			this->ofdImportar = (gcnew System::Windows::Forms::OpenFileDialog());
			this->sfdExportar = (gcnew System::Windows::Forms::SaveFileDialog());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txtPath = (gcnew System::Windows::Forms::TextBox());
			this->BTTNimportar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMatriz))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dgvMatriz
			// 
			this->dgvMatriz->AllowUserToAddRows = false;
			this->dgvMatriz->AllowUserToDeleteRows = false;
			this->dgvMatriz->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvMatriz->Location = System::Drawing::Point(12, 15);
			this->dgvMatriz->Name = L"dgvMatriz";
			this->dgvMatriz->Size = System::Drawing::Size(338, 404);
			this->dgvMatriz->TabIndex = 5;
			// 
			// ofdImportar
			// 
			this->ofdImportar->FileName = L"openFileDialog1";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->txtPath);
			this->groupBox1->Controls->Add(this->BTTNimportar);
			this->groupBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->groupBox1->Location = System::Drawing::Point(356, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(237, 89);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"UImportar Archivo de Texto";
			// 
			// txtPath
			// 
			this->txtPath->Location = System::Drawing::Point(84, 22);
			this->txtPath->Name = L"txtPath";
			this->txtPath->ReadOnly = true;
			this->txtPath->Size = System::Drawing::Size(147, 20);
			this->txtPath->TabIndex = 1;
			// 
			// BTTNimportar
			// 
			this->BTTNimportar->Location = System::Drawing::Point(6, 19);
			this->BTTNimportar->Name = L"BTTNimportar";
			this->BTTNimportar->Size = System::Drawing::Size(72, 25);
			this->BTTNimportar->TabIndex = 0;
			this->BTTNimportar->Text = L"Importar Datos";
			this->BTTNimportar->UseVisualStyleBackColor = true;
			this->BTTNimportar->Click += gcnew System::EventHandler(this, &MyForm1::BTTNimportar_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(605, 431);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dgvMatriz);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMatriz))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: void ReestablecerMatriz() {
		dgvMatriz->Rows->Clear();
		dgvMatriz->Columns->Clear();
		dgvMatriz->ColumnHeadersVisible = false;
		dgvMatriz->RowHeadersVisible = false;
	}

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
	
	private: System::Void BTTNimportar_Click(System::Object^ sender, System::EventArgs^ e) {
		//Se agregan los filtros al OpenFileDialog
		ofdImportar->Filter = "Archivos separados por coma (csv) | *.csv";
		ofdImportar->FileName = "";

		//Unicamnte si el reultado de la apertura del archivo es exitosa se carga el archivo
		if (ofdImportar->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			ReestablecerMatriz(); //Se elimina cualquier contenido de la matriz
			txtPath->Text = ofdImportar->FileName;

			//Se utiliza el objeto File para leer el archivo solo cuando el FileName es correcto
			//Importante haber llamado al namespace System::IO antes de usar File
			array<String^>^ archivoLineas = File::ReadAllLines(ofdImportar->FileName);

			if (archivoLineas->Length > 0) {

				//Obtiene la cantidad de elementos de la primer linea y ese toma como cantidad de columnas
				array<String^>^ archivoColumna = archivoLineas[0]->Split(',');
				if (archivoColumna->Length > 0) {
					int cantidadColumnas = archivoColumna->Length;

					//Agrega las columnas
					for (int i = 0; i < cantidadColumnas; i++) {
						//Crea una columna
						DataGridViewColumn^ nuevacolumna = gcnew DataGridViewColumn();
						nuevacolumna->Width = 20;
						//Le agrega el tipo de columna que será
						DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
						nuevacolumna->CellTemplate = cellTemplate;
						//Inserta la columna
						dgvMatriz->Columns->Add(nuevacolumna);
					}

					//Agrega las filas de manera dinámica
					for (int i = 0; i < archivoLineas->Length; i++) {
						dgvMatriz->Rows->Add();
					}

					//Llena el DatagridView
					for (int i = 0; i < archivoLineas->Length; i++) {
						array<String^>^ fila = archivoLineas[i]->Split(',');
						int j = 0;

						//Si alguna fila tiene más o menos objetos no afecta al funcionamiento ya que utiliza la cantidad de elementos de la primer fila
						while ((j < cantidadColumnas) && (j < fila->Length)) {
							dgvMatriz->Rows[i]->Cells[j]->Value = fila[j];
							j++;
						}
					}
				}
			}

		}
	}
};
}


