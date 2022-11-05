#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0x57a9e072, "devm_snd_soc_register_card" },
	{ 0x538ddda2, "of_device_get_match_data" },
	{ 0xbdfc4af0, "of_phandle_iterator_init" },
	{ 0x518c041c, "asoc_graph_card_probe" },
	{ 0x7c8e20f4, "asoc_simple_remove" },
	{ 0x55b6a9fd, "of_node_name_eq" },
	{ 0x2cf99469, "snd_soc_pm_ops" },
	{ 0xb04fd51b, "asoc_simple_parse_widgets" },
	{ 0xd2b2abe1, "asoc_simple_startup" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0x51d6e901, "of_graph_get_port_parent" },
	{ 0x9fd05cbe, "asoc_simple_canonicalize_cpu" },
	{ 0xdcb764ad, "memset" },
	{ 0x880638fb, "snd_soc_find_dai_with_mutex" },
	{ 0x65277fcb, "asoc_simple_init_priv" },
	{ 0x14c7d77f, "asoc_simple_be_hw_params_fixup" },
	{ 0xb21aa897, "of_graph_get_next_endpoint" },
	{ 0xeece7c87, "asoc_simple_parse_daifmt" },
	{ 0x250e923c, "asoc_simple_parse_routing" },
	{ 0xd9dc6895, "asoc_simple_canonicalize_platform" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xb2351ad2, "devm_kfree" },
	{ 0xaf4ed3a3, "of_graph_get_endpoint_count" },
	{ 0xb15a9499, "asoc_simple_parse_card_name" },
	{ 0x3da04175, "snd_soc_dai_link_set_capabilities" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x83eb276e, "of_get_next_child" },
	{ 0xb22f8129, "of_get_property" },
	{ 0x366eee8b, "snd_soc_of_parse_node_prefix" },
	{ 0xffd61bd9, "asoc_simple_dai_init" },
	{ 0x644ac6b8, "devm_gpiod_get_optional" },
	{ 0x37c16329, "snd_soc_get_dai_id" },
	{ 0xb467b3b, "of_phandle_iterator_next" },
	{ 0x550203cb, "of_get_parent" },
	{ 0x6a736438, "of_graph_parse_endpoint" },
	{ 0x91cc0be5, "snd_soc_get_dai_name" },
	{ 0xabbbd5db, "asoc_simple_shutdown" },
	{ 0xfd389cbc, "gpiod_set_value_cansleep" },
	{ 0xcd1be267, "asoc_simple_clean_reference" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9d56744e, "asoc_simple_set_dailink_name" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0xfec23d99, "asoc_simple_hw_params" },
	{ 0x39e0287c, "of_property_read_variable_u32_array" },
	{ 0x5bd1724b, "of_node_put" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x198e7370, "asoc_simple_parse_clk" },
	{ 0xe95110a9, "snd_soc_of_parse_tdm_slot" },
	{ 0x8efaab7b, "of_graph_get_remote_endpoint" },
	{ 0xf0c0d017, "asoc_simple_parse_convert" },
};

MODULE_INFO(depends, "snd-soc-core,snd-soc-simple-card-utils");

MODULE_ALIAS("of:N*T*Caudio-graph-card");
MODULE_ALIAS("of:N*T*Caudio-graph-cardC*");
MODULE_ALIAS("of:N*T*Caudio-graph-scu-card");
MODULE_ALIAS("of:N*T*Caudio-graph-scu-cardC*");

MODULE_INFO(srcversion, "E2497E0AF291ED8D917122A");
