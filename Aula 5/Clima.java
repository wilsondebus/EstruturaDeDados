public class Clima{
    public String ano;
    public String mes; 
    public String temperatura;
    public String preciptacao;

    public Clima(String ano, String mes, String temperatura, String preciptacao) {
        this.ano = ano;
        this.mes = mes;
        this.temperatura = temperatura;
        this.preciptacao = preciptacao;
    }

    //exibir um onbjeto completo da classe 
    @Override
    public String toString() {
        return "Clima [ano=" + this.ano + ", mes=" + this.mes + ", temperatura=" + this.temperatura + ", preciptacao=" + this.preciptacao +"]";
    }

    @Override   //declarando a chave primaria 
    public boolean equals(Object obj) {
        Clima c = (Clima)obj;
        return (this.ano.equals(c.ano) && this.mes.equals(c.mes));
    }    
}