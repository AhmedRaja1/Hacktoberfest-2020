import CarouselDisplay from react-native-image-carousel-slider
const image = ['https://www.bradykesner.com/wp-content/uploads/2016/11/clingmans-dome-sunset-smoky-mountain-national-park-1030x687.jpg',
'https://www.nps.gov/blri/learn/nature/images/Bear-Trap-Gap-MP-428-robert-Stevens-web.jpg?maxwidth=1200&maxheight=1200&autorotate=false',
'https://static.rootsrated.com/image/upload/s--U0wjV1dP--/t_rr_large_traditional/kzw1j2a9jcad36x6ytof.jpg'
]
class App extends Component {
    state={
        active:0
    }
     handleMovements = ({nativeEvent}) => {
    const slide = Math.ceil(
      nativeEvent.contentOffset.x / nativeEvent.layoutMeasurement.width,
    );
    if (slide !== this.state.active) {
      this.setState({
        active: slide,
      });
    }
  };
    render(){
        return(
            <CarouselDisplay 
            screen={'DisplayFullImages'} 
          fixedData={image}
          screenNavigation={this.props.navigation}
          active={this.state.active}
          handleMovements={this.handleMovements}
        />

       
        )
    }
}