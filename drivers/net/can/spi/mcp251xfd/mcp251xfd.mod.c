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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xac28c00e, "__devm_regmap_init" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6c70a71c, "netdev_info" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x862258db, "timecounter_init" },
	{ 0x49ba01b3, "__pm_runtime_idle" },
	{ 0x821a8c68, "register_candev" },
	{ 0xab971f46, "can_rx_offload_queue_sorted" },
	{ 0x815588a6, "clk_enable" },
	{ 0x76685e8a, "__pm_runtime_disable" },
	{ 0x5992b1a7, "netdev_notice" },
	{ 0xd17c8ecb, "napi_disable" },
	{ 0xb973e18e, "regmap_raw_write" },
	{ 0x78305fec, "alloc_can_err_skb" },
	{ 0x73053428, "dev_err_probe" },
	{ 0x3967f406, "regulator_disable" },
	{ 0x269fdf77, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x4ea25709, "dql_reset" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x56470118, "__warn_printk" },
	{ 0xff56896e, "regmap_bulk_read" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x70c6196b, "__spi_register_driver" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x2a6ac568, "__pm_runtime_resume" },
	{ 0xf93042ef, "regmap_read" },
	{ 0x62e9350e, "spi_setup" },
	{ 0x50335705, "can_rx_offload_get_echo_skb" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x8f3f6265, "devm_clk_get_optional" },
	{ 0xd5279d86, "can_rx_offload_enable" },
	{ 0x46a5c76c, "can_bus_off" },
	{ 0x865ef606, "netif_schedule_queue" },
	{ 0x3409bde9, "device_get_match_data" },
	{ 0xdcb764ad, "memset" },
	{ 0x41364173, "close_candev" },
	{ 0x6903f4f, "spi_async" },
	{ 0x120b6fcc, "netif_tx_wake_queue" },
	{ 0xdde38b87, "dev_coredumpv" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0xf12d9387, "can_fd_dlc2len" },
	{ 0xadcac529, "driver_unregister" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x6047ede6, "can_fd_len2dlc" },
	{ 0x3f770116, "alloc_candev_mqs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x2fc6088a, "free_candev" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xb2351ad2, "devm_kfree" },
	{ 0x6f9e763b, "timecounter_read" },
	{ 0x52829b9d, "spi_sync" },
	{ 0x1154649a, "can_rx_offload_add_manual" },
	{ 0x10feca47, "can_change_mtu" },
	{ 0xbc3f2cb0, "timecounter_cyc2time" },
	{ 0xc09d7da6, "can_change_state" },
	{ 0x12350178, "device_property_read_u32_array" },
	{ 0x7088be82, "unregister_candev" },
	{ 0x8c78196, "alloc_can_skb" },
	{ 0x98889996, "pm_runtime_enable" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x821159a, "__pm_runtime_set_status" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0xe4afd411, "devm_regulator_get_optional" },
	{ 0xb4a70c9c, "netdev_err" },
	{ 0x74c84537, "devm_gpiod_put" },
	{ 0x26c10440, "open_candev" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x2f1af00b, "can_rx_offload_threaded_irq_finish" },
	{ 0x644ac6b8, "devm_gpiod_get_optional" },
	{ 0x5a602b25, "netdev_warn" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x7c387d5b, "can_skb_get_frame_len" },
	{ 0xae04012c, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x54f59995, "spi_write_then_read" },
	{ 0x4829a47e, "memcpy" },
	{ 0x9667cc7c, "spi_get_device_id" },
	{ 0x6215280f, "alloc_canfd_skb" },
	{ 0x75a0d40b, "regmap_get_val_bytes" },
	{ 0xffb35a2a, "can_put_echo_skb" },
	{ 0x272edb4, "can_rx_offload_del" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x45a55acd, "regmap_write" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd769d20f, "regulator_enable" },
	{ 0x3a760923, "gpiod_get_value_cansleep" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("of:N*T*Cmicrochip,mcp2517fd");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2517fdC*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2518fd");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2518fdC*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp251xfd");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp251xfdC*");
MODULE_ALIAS("spi:mcp2517fd");
MODULE_ALIAS("spi:mcp2518fd");
MODULE_ALIAS("spi:mcp251xfd");

MODULE_INFO(srcversion, "9613A1ED0310E3E5AB73411");
