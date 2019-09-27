#pragma once
#include <stdlib.h>
#include "Manejador.h"
namespace TP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			objman = new Manejador();
			
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_hit;
	protected:


	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		Manejador*objman;
		
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Timer^  timer2;




	private: System::Windows::Forms::PictureBox^  ficha5;
	private: System::Windows::Forms::PictureBox^  ficha10;
	private: System::Windows::Forms::PictureBox^  ficha25;




	private: System::Windows::Forms::PictureBox^  ficha1;
	private: System::Windows::Forms::PictureBox^  ficha100;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;



	private: System::Windows::Forms::Button^  btnStand;
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btn_hit = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnStand = (gcnew System::Windows::Forms::Button());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->ficha5 = (gcnew System::Windows::Forms::PictureBox());
			this->ficha10 = (gcnew System::Windows::Forms::PictureBox());
			this->ficha25 = (gcnew System::Windows::Forms::PictureBox());
			this->ficha1 = (gcnew System::Windows::Forms::PictureBox());
			this->ficha100 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ficha5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ficha10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ficha25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ficha1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ficha100))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_hit
			// 
			this->btn_hit->Location = System::Drawing::Point(94, 573);
			this->btn_hit->Name = L"btn_hit";
			this->btn_hit->Size = System::Drawing::Size(75, 23);
			this->btn_hit->TabIndex = 0;
			this->btn_hit->Text = L"HIT";
			this->btn_hit->UseVisualStyleBackColor = true;
			this->btn_hit->Visible = false;
			this->btn_hit->Click += gcnew System::EventHandler(this, &MyForm::btn_jugar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Teletoon Lowercase", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(105, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 26);
			this->label1->TabIndex = 1;
			this->label1->Text = L"label1";
			this->label1->Visible = false;
			// 
			// btnStand
			// 
			this->btnStand->Location = System::Drawing::Point(459, 573);
			this->btnStand->Name = L"btnStand";
			this->btnStand->Size = System::Drawing::Size(75, 23);
			this->btnStand->TabIndex = 2;
			this->btnStand->Text = L"STAND";
			this->btnStand->UseVisualStyleBackColor = true;
			this->btnStand->Visible = false;
			this->btnStand->Click += gcnew System::EventHandler(this, &MyForm::btnStand_Click);
			// 
			// timer2
			// 
			this->timer2->Enabled = true;
			this->timer2->Interval = 500;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			// 
			// ficha5
			// 
			this->ficha5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ficha5.Image")));
			this->ficha5->Location = System::Drawing::Point(144, 861);
			this->ficha5->Name = L"ficha5";
			this->ficha5->Size = System::Drawing::Size(101, 87);
			this->ficha5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->ficha5->TabIndex = 11;
			this->ficha5->TabStop = false;
			this->ficha5->Visible = false;
			this->ficha5->Click += gcnew System::EventHandler(this, &MyForm::ficha5_Click);
			// 
			// ficha10
			// 
			this->ficha10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ficha10.Image")));
			this->ficha10->Location = System::Drawing::Point(251, 861);
			this->ficha10->Name = L"ficha10";
			this->ficha10->Size = System::Drawing::Size(100, 87);
			this->ficha10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->ficha10->TabIndex = 12;
			this->ficha10->TabStop = false;
			this->ficha10->Visible = false;
			this->ficha10->Click += gcnew System::EventHandler(this, &MyForm::ficha10_Click);
			// 
			// ficha25
			// 
			this->ficha25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ficha25.Image")));
			this->ficha25->Location = System::Drawing::Point(357, 861);
			this->ficha25->Name = L"ficha25";
			this->ficha25->Size = System::Drawing::Size(100, 87);
			this->ficha25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->ficha25->TabIndex = 13;
			this->ficha25->TabStop = false;
			this->ficha25->Visible = false;
			this->ficha25->Click += gcnew System::EventHandler(this, &MyForm::ficha25_Click);
			// 
			// ficha1
			// 
			this->ficha1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ficha1.Image")));
			this->ficha1->Location = System::Drawing::Point(37, 861);
			this->ficha1->Name = L"ficha1";
			this->ficha1->Size = System::Drawing::Size(101, 87);
			this->ficha1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->ficha1->TabIndex = 10;
			this->ficha1->TabStop = false;
			this->ficha1->Visible = false;
			this->ficha1->Click += gcnew System::EventHandler(this, &MyForm::ficha1_Click);
			// 
			// ficha100
			// 
			this->ficha100->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ficha100.Image")));
			this->ficha100->Location = System::Drawing::Point(463, 861);
			this->ficha100->Name = L"ficha100";
			this->ficha100->Size = System::Drawing::Size(100, 87);
			this->ficha100->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->ficha100->TabIndex = 14;
			this->ficha100->TabStop = false;
			this->ficha100->Visible = false;
			this->ficha100->Click += gcnew System::EventHandler(this, &MyForm::ficha100_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(171, 402);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(286, 109);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Teletoon Lowercase", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(24, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 21);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Suma:";
			this->label2->Visible = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 696);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 17;
			this->button1->Text = L"BET";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Teletoon Lowercase", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(202, 636);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(119, 21);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Total Apeusta";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Teletoon Lowercase", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(327, 632);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(68, 26);
			this->label4->TabIndex = 19;
			this->label4->Text = L"label4";
			this->label4->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkGreen;
			this->ClientSize = System::Drawing::Size(590, 960);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->ficha100);
			this->Controls->Add(this->ficha25);
			this->Controls->Add(this->ficha10);
			this->Controls->Add(this->ficha5);
			this->Controls->Add(this->ficha1);
			this->Controls->Add(this->btnStand);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_hit);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ficha5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ficha10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ficha25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ficha1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ficha100))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_jugar_Click(System::Object^  sender, System::EventArgs^  e) {
		
		bool bjk;
		if (objman->getSuma_J() >= 21)bjk = true;
		srand(time(NULL));
		int tipo = rand() % 4 + 1;
		objman->Insertar_Cartas_Jugador(tipo,bjk);
	
	}
	private: System::Void btnStand_Click(System::Object^  sender, System::EventArgs^  e) {
		btn_hit->Enabled = false;
	}

private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
		label1->Text = objman->getSuma_J().ToString();
		label4->Text = objman->getBEt().ToString();
		Graphics ^g = this->CreateGraphics();
		BufferedGraphicsContext ^espacioBuffer = BufferedGraphicsManager::Current;
		BufferedGraphics ^buffer = espacioBuffer->Allocate(g, this->ClientRectangle);
		buffer->Graphics->Clear(Color::DarkGreen);
		if (objman->GA()==true){ objman->Dibuja_Cartas_Jugador(buffer); }		
		if (objman->GA2() == true) { objman->Dibuja_Apuesta(buffer); }
		buffer->Render(g);
		delete buffer;
		delete espacioBuffer;
		delete g;
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox1->Visible = false;
	button1->Visible = true;
	label3->Visible=true;
	label4->Visible=true;
	ficha1->Visible = true;
	ficha5->Visible = true;
	ficha10->Visible = true;
	ficha25->Visible = true;
	ficha100->Visible = true;
}
private: System::Void ficha1_Click(System::Object^  sender, System::EventArgs^  e) {
	objman->Insertar_Apuesta(1);
}
private: System::Void ficha5_Click(System::Object^  sender, System::EventArgs^  e) {
	objman->Insertar_Apuesta(5);
}
private: System::Void ficha10_Click(System::Object^  sender, System::EventArgs^  e) {
	objman->Insertar_Apuesta(10);
}
private: System::Void ficha25_Click(System::Object^  sender, System::EventArgs^  e) {
	objman->Insertar_Apuesta(25);
}
private: System::Void ficha100_Click(System::Object^  sender, System::EventArgs^  e) {
	objman->Insertar_Apuesta(100);
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	timer2->Enabled = true;
	label1->Visible = true;
	label2->Visible = true;
	btnStand->Visible = true;
	btn_hit->Visible = true;
	button1->Visible = false;

}
};
}
