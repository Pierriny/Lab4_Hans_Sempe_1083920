#pragma once
# include <string>

namespace Lab4HansSempe1083920 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
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
	private: System::Windows::Forms::DataGridView^ dgvMatriz2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ BubbleDenuncia;
	private: System::Windows::Forms::Button^ BubbleAño;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ QuickDenuncia;
	private: System::Windows::Forms::Button^ QuickAño;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Button^ MergeDenuncia;
	private: System::Windows::Forms::Button^ MergeAño;



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
			this->dgvMatriz2 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->BubbleAño = (gcnew System::Windows::Forms::Button());
			this->BubbleDenuncia = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->QuickDenuncia = (gcnew System::Windows::Forms::Button());
			this->QuickAño = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->MergeDenuncia = (gcnew System::Windows::Forms::Button());
			this->MergeAño = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMatriz))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMatriz2))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// dgvMatriz
			// 
			this->dgvMatriz->AllowUserToAddRows = false;
			this->dgvMatriz->AllowUserToDeleteRows = false;
			this->dgvMatriz->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvMatriz->Location = System::Drawing::Point(12, 31);
			this->dgvMatriz->Name = L"dgvMatriz";
			this->dgvMatriz->Size = System::Drawing::Size(298, 455);
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
			this->groupBox1->Location = System::Drawing::Point(316, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(238, 89);
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
			// dgvMatriz2
			// 
			this->dgvMatriz2->AllowUserToAddRows = false;
			this->dgvMatriz2->AllowUserToDeleteRows = false;
			this->dgvMatriz2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvMatriz2->Location = System::Drawing::Point(560, 31);
			this->dgvMatriz2->Name = L"dgvMatriz2";
			this->dgvMatriz2->Size = System::Drawing::Size(298, 455);
			this->dgvMatriz2->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(122, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Version Original";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(672, 15);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Version Ordenada";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->BubbleDenuncia);
			this->groupBox2->Controls->Add(this->BubbleAño);
			this->groupBox2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->groupBox2->Location = System::Drawing::Point(316, 107);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(238, 57);
			this->groupBox2->TabIndex = 7;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"BubbleSort";
			// 
			// BubbleAño
			// 
			this->BubbleAño->Location = System::Drawing::Point(128, 19);
			this->BubbleAño->Name = L"BubbleAño";
			this->BubbleAño->Size = System::Drawing::Size(93, 25);
			this->BubbleAño->TabIndex = 0;
			this->BubbleAño->Text = L"Por año";
			this->BubbleAño->UseVisualStyleBackColor = true;
			this->BubbleAño->Click += gcnew System::EventHandler(this, &MyForm1::BubbleAño_Click);
			// 
			// BubbleDenuncia
			// 
			this->BubbleDenuncia->Location = System::Drawing::Point(17, 19);
			this->BubbleDenuncia->Name = L"BubbleDenuncia";
			this->BubbleDenuncia->Size = System::Drawing::Size(93, 25);
			this->BubbleDenuncia->TabIndex = 1;
			this->BubbleDenuncia->Text = L"Por # denuncias";
			this->BubbleDenuncia->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->QuickDenuncia);
			this->groupBox3->Controls->Add(this->QuickAño);
			this->groupBox3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->groupBox3->Location = System::Drawing::Point(316, 170);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(238, 57);
			this->groupBox3->TabIndex = 8;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"QuickSort";
			// 
			// QuickDenuncia
			// 
			this->QuickDenuncia->Location = System::Drawing::Point(17, 19);
			this->QuickDenuncia->Name = L"QuickDenuncia";
			this->QuickDenuncia->Size = System::Drawing::Size(93, 25);
			this->QuickDenuncia->TabIndex = 1;
			this->QuickDenuncia->Text = L"Por # denuncias";
			this->QuickDenuncia->UseVisualStyleBackColor = true;
			// 
			// QuickAño
			// 
			this->QuickAño->Location = System::Drawing::Point(128, 19);
			this->QuickAño->Name = L"QuickAño";
			this->QuickAño->Size = System::Drawing::Size(93, 25);
			this->QuickAño->TabIndex = 0;
			this->QuickAño->Text = L"Por año";
			this->QuickAño->UseVisualStyleBackColor = true;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->MergeDenuncia);
			this->groupBox4->Controls->Add(this->MergeAño);
			this->groupBox4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->groupBox4->Location = System::Drawing::Point(316, 233);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(238, 57);
			this->groupBox4->TabIndex = 9;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"MergeSort";
			// 
			// MergeDenuncia
			// 
			this->MergeDenuncia->Location = System::Drawing::Point(17, 19);
			this->MergeDenuncia->Name = L"MergeDenuncia";
			this->MergeDenuncia->Size = System::Drawing::Size(93, 25);
			this->MergeDenuncia->TabIndex = 1;
			this->MergeDenuncia->Text = L"Por # denuncias";
			this->MergeDenuncia->UseVisualStyleBackColor = true;
			// 
			// MergeAño
			// 
			this->MergeAño->Location = System::Drawing::Point(128, 19);
			this->MergeAño->Name = L"MergeAño";
			this->MergeAño->Size = System::Drawing::Size(93, 25);
			this->MergeAño->TabIndex = 0;
			this->MergeAño->Text = L"Por año";
			this->MergeAño->UseVisualStyleBackColor = true;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(874, 498);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dgvMatriz2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dgvMatriz);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMatriz))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMatriz2))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		int X;
		int Y;


		private: void ReestablecerMatriz() {
			dgvMatriz->Rows->Clear();
			dgvMatriz->Columns->Clear();
			dgvMatriz->ColumnHeadersVisible = false;
			dgvMatriz->RowHeadersVisible = false;
		}


		private: System::Void BTTNimportar_Click(System::Object^ sender, System::EventArgs^ e) {
	
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
					array<String^>^ archivoColumna = archivoLineas[0]->Split(';');
					if (archivoColumna->Length > 0) {
						int cantidadColumnas = archivoColumna->Length;

						X = cantidadColumnas;
						Y = archivoLineas->Length;



						//Agrega las columnas
						for (int i = 0; i < cantidadColumnas; i++) {
							//Crea una columna
							DataGridViewColumn^ nuevacolumna = gcnew DataGridViewColumn();
							nuevacolumna->Width = 100;
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
							array<String^>^ fila = archivoLineas[i]->Split(';');
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
			else {
				// Si no se selecciona correctamente un elemento entonces falla
				MessageBox::Show("No se seleccionó ningún archivo"
					, "Archivo no seleccionado"
					, MessageBoxButtons::OK
					, MessageBoxIcon::Exclamation);
			}
		}





		//para ordenar por año
		void bubbleSort1(int a[], int q, int b)
		{
			for (int i = 0; i < q; i++)
			{
				for (int j = 0; j < b; j++)
				{
					if (Convert::ToInt32(dgvMatriz->Rows[i]->Cells[1]->Value) > Convert::ToInt32(dgvMatriz->Rows[i+1]->Cells[1]->Value))
					{






				    /*int temp = Convert::ToInt32(dgvMatriz->Rows[i]->Cells[j]->Value);

						a[j] = a[j + 1];


						a[j + 1] = temp;*/
					}
				}
			}
		}




		//merge function
		void merge(int l, int m, int r) {
			int i = l;
			int j = m + 1;
			int k = l;


			while (i <= m && j <= r) {

			}


		}


		//merge sort function
		void mergeSort(int l, int r) {

			if (l < r) {
				int m = (l + r) / 2;



			}

		}

		private: System::Void BubbleAño_Click(System::Object^ sender, System::EventArgs^ e) {





		}
};
}




