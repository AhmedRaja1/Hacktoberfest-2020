import React from "react";
import {
  View,
  Text,
  ScrollView,
  TouchableOpacity,
  StyleSheet,
  Dimensions,
  Image,
  Alert
} from "react-native";
export default class CarouselDisplay extends React.PureComponent {
  moveDetailImage = (image, index) => {
    let dataImage = [];
    let newImage = dataImage.concat(image, index);
    if(!this.props.screen){
        Alert.alert('You Must Passing Screen Property as parameter')
    }else{
        this.props.screenNavigation.navigate(this.props.screen, {
            detailImage: newImage,
          });
    }

  };

  render() {
    return (
      <View>
        <View
          style={{
            flexDirection: "row",
            position: "absolute",
            alignSelf: "center",
            marginTop: 195,
            justifyContent: "center",
            zIndex: 9999,
          }}
        >
          {this.props.fixedData.map((i, k) => (
            <Text
              key={k}
              style={
                k === this.props.active ? styles.pagingActive : styles.paging
              }
            >
              ⬤
            </Text>
          ))}
        </View>
        <ScrollView
          pagingEnabled
          horizontal
          onScroll={this.props.handleMovements}
          showsHorizontalScrollIndicator={false}
          style={styles.backgroundImage}
        >
          {this.props.fixedData.map((img, index) => (
            <TouchableOpacity
              onPress={() =>
                this.moveDetailImage(this.props.fixedData, img)
              }
            >
              <Image
                key={index}
                source={{ uri: img }}
                style={styles.backgroundImage}
              />
            </TouchableOpacity>
          ))}
        </ScrollView>
      </View>
    );
  }
}
const styles = StyleSheet.create({
  backgroundImage: {
    width: Dimensions.get("window").width,
    height: (Dimensions.get("window").width * 75) / 100,
    backgroundColor: "black",
  },
  paging: {
    fontSize: 15,
    color: "#888",
    top:35
  }, 
  pagingActive: {
    fontSize: 15,
    color: "white",
    top:35
 
  },
});