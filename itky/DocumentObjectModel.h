class DocumentObjectModel {
  private:

  public:
    DocumentObjectModel() = default;
    DocumentObjectModel();
    virtual ~DocumentObjectModel();

    virtual void write() = 0;
};

using DOM = DocumentObjectModel;
