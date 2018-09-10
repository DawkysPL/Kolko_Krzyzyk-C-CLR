#pragma once
#include <iostream>
#include <Windows.h>
namespace KiK {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o Gra
	/// </summary>
	public ref class Gra : public System::Windows::Forms::Form
	{
		bool gracz = true;
		bool czy_wygrana = false;
		int wygranaX = 0, wygranaO = 0, czy_remis = 0;
		String^ mistrzunio;
	public:
		Gra(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Gra()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  etWygranaX;
	private: System::Windows::Forms::Label^  etWygranaO;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::PictureBox^  A1;
	private: System::Windows::Forms::PictureBox^  B1;
	private: System::Windows::Forms::PictureBox^  C1;
	private: System::Windows::Forms::PictureBox^  B2;
	private: System::Windows::Forms::PictureBox^  C2;
	private: System::Windows::Forms::PictureBox^  B3;
	private: System::Windows::Forms::PictureBox^  C3;







	private: System::Windows::Forms::PictureBox^  A2;
	private: System::Windows::Forms::PictureBox^  A3;


	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::ComponentModel::IContainer^  components;












	protected:


	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda obs³ugi projektanta — nie nale¿y modyfikowaæ 
		/// zawartoœæ tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Gra::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->etWygranaX = (gcnew System::Windows::Forms::Label());
			this->etWygranaO = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->A1 = (gcnew System::Windows::Forms::PictureBox());
			this->B1 = (gcnew System::Windows::Forms::PictureBox());
			this->C1 = (gcnew System::Windows::Forms::PictureBox());
			this->B2 = (gcnew System::Windows::Forms::PictureBox());
			this->C2 = (gcnew System::Windows::Forms::PictureBox());
			this->B3 = (gcnew System::Windows::Forms::PictureBox());
			this->C3 = (gcnew System::Windows::Forms::PictureBox());
			this->A2 = (gcnew System::Windows::Forms::PictureBox());
			this->A3 = (gcnew System::Windows::Forms::PictureBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(37, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Wygrane X";
			// 
			// etWygranaX
			// 
			this->etWygranaX->AutoSize = true;
			this->etWygranaX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->etWygranaX->Location = System::Drawing::Point(62, 26);
			this->etWygranaX->Name = L"etWygranaX";
			this->etWygranaX->Size = System::Drawing::Size(19, 20);
			this->etWygranaX->TabIndex = 1;
			this->etWygranaX->Text = L"0";
			this->etWygranaX->Click += gcnew System::EventHandler(this, &Gra::label2_Click);
			// 
			// etWygranaO
			// 
			this->etWygranaO->AutoSize = true;
			this->etWygranaO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->etWygranaO->Location = System::Drawing::Point(189, 26);
			this->etWygranaO->Name = L"etWygranaO";
			this->etWygranaO->Size = System::Drawing::Size(19, 20);
			this->etWygranaO->TabIndex = 3;
			this->etWygranaO->Text = L"0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(164, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Wygrane O";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(24, 352);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 31);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Reset";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Gra::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(167, 352);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(97, 31);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Nowa gra";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Gra::button2_Click);
			// 
			// A1
			// 
			this->A1->BackColor = System::Drawing::SystemColors::Control;
			this->A1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A1.Image")));
			this->A1->Location = System::Drawing::Point(16, 64);
			this->A1->Name = L"A1";
			this->A1->Size = System::Drawing::Size(48, 59);
			this->A1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->A1->TabIndex = 6;
			this->A1->TabStop = false;
			this->A1->Tag = L"\?";
			this->A1->Click += gcnew System::EventHandler(this, &Gra::graj);
			// 
			// B1
			// 
			this->B1->BackColor = System::Drawing::SystemColors::Control;
			this->B1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B1.Image")));
			this->B1->Location = System::Drawing::Point(108, 63);
			this->B1->Name = L"B1";
			this->B1->Size = System::Drawing::Size(48, 59);
			this->B1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->B1->TabIndex = 7;
			this->B1->TabStop = false;
			this->B1->Tag = L"\?";
			this->B1->Click += gcnew System::EventHandler(this, &Gra::graj);
			// 
			// C1
			// 
			this->C1->BackColor = System::Drawing::SystemColors::Control;
			this->C1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C1.Image")));
			this->C1->Location = System::Drawing::Point(202, 54);
			this->C1->Name = L"C1";
			this->C1->Size = System::Drawing::Size(48, 59);
			this->C1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->C1->TabIndex = 8;
			this->C1->TabStop = false;
			this->C1->Tag = L"\?";
			this->C1->Click += gcnew System::EventHandler(this, &Gra::graj);
			// 
			// B2
			// 
			this->B2->BackColor = System::Drawing::SystemColors::Control;
			this->B2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B2.Image")));
			this->B2->Location = System::Drawing::Point(111, 149);
			this->B2->Name = L"B2";
			this->B2->Size = System::Drawing::Size(48, 59);
			this->B2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->B2->TabIndex = 9;
			this->B2->TabStop = false;
			this->B2->Tag = L"\?";
			this->B2->Click += gcnew System::EventHandler(this, &Gra::graj);
			// 
			// C2
			// 
			this->C2->BackColor = System::Drawing::SystemColors::Control;
			this->C2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C2.Image")));
			this->C2->Location = System::Drawing::Point(201, 146);
			this->C2->Name = L"C2";
			this->C2->Size = System::Drawing::Size(48, 59);
			this->C2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->C2->TabIndex = 10;
			this->C2->TabStop = false;
			this->C2->Tag = L"\?";
			this->C2->Click += gcnew System::EventHandler(this, &Gra::graj);
			// 
			// B3
			// 
			this->B3->BackColor = System::Drawing::SystemColors::Control;
			this->B3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B3.Image")));
			this->B3->Location = System::Drawing::Point(111, 242);
			this->B3->Name = L"B3";
			this->B3->Size = System::Drawing::Size(48, 59);
			this->B3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->B3->TabIndex = 11;
			this->B3->TabStop = false;
			this->B3->Tag = L"\?";
			this->B3->Click += gcnew System::EventHandler(this, &Gra::graj);
			// 
			// C3
			// 
			this->C3->BackColor = System::Drawing::SystemColors::Control;
			this->C3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C3.Image")));
			this->C3->Location = System::Drawing::Point(202, 233);
			this->C3->Name = L"C3";
			this->C3->Size = System::Drawing::Size(48, 59);
			this->C3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->C3->TabIndex = 12;
			this->C3->TabStop = false;
			this->C3->Tag = L"\?";
			this->C3->Click += gcnew System::EventHandler(this, &Gra::graj);
			// 
			// A2
			// 
			this->A2->BackColor = System::Drawing::SystemColors::Control;
			this->A2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A2.Image")));
			this->A2->Location = System::Drawing::Point(16, 158);
			this->A2->Name = L"A2";
			this->A2->Size = System::Drawing::Size(48, 59);
			this->A2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->A2->TabIndex = 13;
			this->A2->TabStop = false;
			this->A2->Tag = L"\?";
			this->A2->Click += gcnew System::EventHandler(this, &Gra::graj);
			// 
			// A3
			// 
			this->A3->BackColor = System::Drawing::SystemColors::Control;
			this->A3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A3.Image")));
			this->A3->Location = System::Drawing::Point(16, 242);
			this->A3->Name = L"A3";
			this->A3->Size = System::Drawing::Size(48, 59);
			this->A3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->A3->TabIndex = 14;
			this->A3->TabStop = false;
			this->A3->Tag = L"\?";
			this->A3->Click += gcnew System::EventHandler(this, &Gra::graj);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"kolko.png");
			this->imageList1->Images->SetKeyName(1, L"krzyzyk.png");
			this->imageList1->Images->SetKeyName(2, L"pytajnik.png");
			// 
			// Gra
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(282, 403);
			this->Controls->Add(this->A3);
			this->Controls->Add(this->A2);
			this->Controls->Add(this->C3);
			this->Controls->Add(this->B3);
			this->Controls->Add(this->C2);
			this->Controls->Add(this->B2);
			this->Controls->Add(this->C1);
			this->Controls->Add(this->B1);
			this->Controls->Add(this->A1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->etWygranaO);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->etWygranaX);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Gra";
			this->Text = L"Gra";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void graj(System::Object^  sender, System::EventArgs^  e) {
		PictureBox^ obraz = (PictureBox^)sender;

		if (gracz)
		{
			obraz->Image = imageList1->Images[1];
			gracz = false;
			obraz->Tag = "X";
		}
		else
		{
			obraz->Image = imageList1->Images[0];
			gracz = true;
			obraz->Tag = "Y";
		}
		
		obraz->Enabled = false;
		wygrany();
		remis();
	}
			
			 private: Void remis()
			 {
				 for each(Control^ elementy in this->Controls)
				 {
					 try
					 {
						 PictureBox^ zdjecie = (PictureBox^)elementy;
						 if (zdjecie->Tag != "?") czy_remis++;
					 }
					 catch (...)
					 {

					 }

				 }
				 if (czy_remis ==9)
				 {
					 Sleep(2000);
					 for each(Control^ element in this->Controls)
					 {
						 try
						 {
							 PictureBox^ zdjecie = (PictureBox^)element;
							 zdjecie->Enabled = true;
							 zdjecie->Tag = "?";
							 zdjecie->Image = imageList1->Images[2];

						 }
						 catch (...)
						 {

						 }
					 }
				 }
				 else
				 {
					 czy_remis = 0;
				 }
				 
			 }

				private: Void wygrany() {
				 // poziom
				if ((A1->Tag == B1->Tag) && (B1->Tag == C1->Tag) && (A1->Tag != "?"))czy_wygrana = true; //1 poziom
				if ((A2->Tag == B2->Tag) && (B2->Tag == C2->Tag) && (C2->Tag != "?")) czy_wygrana = true;//2 poziom
				if ((A3->Tag == B3->Tag) && (B3->Tag == C3->Tag) && (C3->Tag != "?"))czy_wygrana = true; //3 poziom
				 // pion
				 if ((A1->Tag == A2->Tag) && (A2->Tag == A3->Tag) && (A3->Tag != "?"))czy_wygrana = true; // 1 pion
				 if ((B1->Tag == B2->Tag) && (B2->Tag == B3->Tag) && (B3->Tag != "?")) czy_wygrana = true;// 2 pion
				 if ((C1->Tag == C2->Tag) && (C2->Tag == C3->Tag) && (C3->Tag != "?")) czy_wygrana = true;// 3 pion 																					  
				 // ukos
				 if ((A1->Tag == B2->Tag) && (B2->Tag == C3->Tag) && (C3->Tag != "?"))czy_wygrana = true;
				 if ((A3->Tag == B2->Tag) && (B2->Tag == C1->Tag) && (C1->Tag != "?"))czy_wygrana = true;
				 if (czy_wygrana == true)
				 {
					 for each(Control^ element in this->Controls)
					 {
						 if (element->GetType() == PictureBox::typeid)element->Enabled = false;
					 }
					 if (gracz == true)
					 {
						 wygranaO++;
						 etWygranaO->Text = Convert::ToString(wygranaO);
						 mistrzunio = "O";
					 }
					 else
					 {
						 wygranaX++;
						 etWygranaX->Text = Convert::ToString(wygranaX);
						 mistrzunio = "X";
					 }
					 MessageBox::Show("Wygrana: "+mistrzunio, "Gra", MessageBoxButtons::OKCancel, MessageBoxIcon::Exclamation);
					 
				 } 
			 }
					
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	czy_wygrana = false;
	for each( Control^ element in this->Controls)
	{
		try
		{
			PictureBox^ zdjecie = (PictureBox^)element;
			zdjecie->Enabled = true;
			zdjecie->Tag = "?";
			zdjecie->Image = imageList1->Images[2];
			
		}
		catch (...)
		{

		}
	}	
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	czy_wygrana = false;
	for each(Control^ element in this->Controls)
	{
		try
		{
			PictureBox^ zdjecie = (PictureBox^)element;
			zdjecie->Enabled = true;
			zdjecie->Tag = "?";
			zdjecie->Image = imageList1->Images[2];

		}
		catch (...)
		{

		}
	}
	wygranaO = 0;
	etWygranaO->Text = Convert::ToString(wygranaO);
	wygranaX = 0;
	etWygranaX->Text = Convert::ToString(wygranaX);
}
};
}
